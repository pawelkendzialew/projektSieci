#include "arx.h"
#include "simulation.h"
#include <random>

ARX::ARX()
{
    this->u.resize(this->A.size());
    this->y.resize(this->B.size());
}

void ARX::set_a(std::vector<float> a)
{
    this->A = a;
    this->y.resize(this->A.size());
}

void ARX::set_b(std::vector<float> b)
{
    this->B = b;
    this->y.resize(this->B.size());
}

void ARX::set_noise(float noise)
{
    this->noise = noise;
}

void ARX::set_delay(size_t delay)
{
    this->delay = delay;

    this->u.resize(this->delay);
    this->y.resize(this->delay);
}

void ARX::set_noise_type(NoiseType type)
{
    this->noise_type = type;
}

std::vector<float> ARX::get_a() const
{
    return this->A;
}

std::vector<float> ARX::get_b() const
{
    return this->B;
}

float ARX::get_noise() const
{
    return this->noise;
}

size_t ARX::get_delay() const
{
    return this->delay;
}

NoiseType ARX::get_noise_type() const
{
    return this->noise_type;
}

void ARX::run_noise()
{
    std::random_device rd;
    std::mt19937 gen(rd());


    if (this->noise == 0.0f) {
        this->noise_part = 0.0f;
        return;
    }

    float safe_noise = this->noise;
    if (safe_noise <= 0.0f) {
        safe_noise = 1e-6f;
    }

    switch (this->noise_type) {
    case NoiseType::normal:
        this->noise_part = std::normal_distribution<float>(0, safe_noise)(gen);
        break;

    case NoiseType::uniform:
    case NoiseType::triangular:
        this->noise_part = std::uniform_real_distribution<float>(-safe_noise, safe_noise)(gen);
        break;

    case NoiseType::exponential:
        this->noise_part = std::exponential_distribution<float>(safe_noise)(gen);
        break;

    case NoiseType::laplace:
        this->noise_part = 0.0f;
        break;

    case NoiseType::poisson:
        this->noise_part = std::poisson_distribution<int>(safe_noise)(gen);
        break;

    case NoiseType::gamma:
        this->noise_part = std::gamma_distribution<float>(safe_noise, safe_noise)(gen);
        break;

    case NoiseType::beta:
        this->noise_part = 0.0f;
        break;
    }
}

void ARX::reset()
{
    // this->u
}

float ARX::run(float input)
{
    size_t tick = Simulation::get_instance().get_tick();

    float result = 0;

    if (this->B.size() != this->A.size())
    {
        size_t size = std::max({B.size(), A.size()});

        B.resize(size);
        A.resize(size);
    }

    for (size_t i = 0; i < this->A.size(); i++) {
        if (tick - i > delay) {
            const size_t u_idx = (tick - i) % delay;
            try {
              result += this->B.at(i) * this->u.at(u_idx);
            } catch (...) {

            }

        }
    }

    for (size_t i = 0; i < this->B.size(); i++) {
        if (tick - i > delay) {
            const size_t y_idx = (tick - i) % delay;
            try{
                result -= this->A.at(i) * this->y.at(y_idx);
            } catch (...){

            }

        }
    }

    const size_t u_size_t = (tick) % delay;
    const size_t y_size_t = (tick) % delay;

    if (u.size() < delay || y.size() < delay) {
        u.resize(delay);
        y.resize(delay);
    }


    this->u[u_size_t] = input;
    this->y[y_size_t] = result;

    this->run_noise();
    result += this->noise_part;

    return result;

    return this->y.back();
}
