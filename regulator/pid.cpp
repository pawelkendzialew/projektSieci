#include "pid.h"
#include <QDebug>
#include <numeric>

PID::PID() {}

void PID::set_kp(float kp)
{
    this->kp = kp;
}

void PID::set_ti(float ti)
{
    this->ti = ti;
}

void PID::set_td(float td)
{
    this->td = td;
}

float PID::get_kp() const
{
    return this->kp;
}

float PID::get_ti() const
{
    return this->ti;
}

float PID::get_td() const
{
    return this->td;
}

void PID::run_integral(float error)
{
    if (this->ti == 0) {
        this->integral_values.clear();
        this->integral_part = 0;
        return;
    }

    if (this->integral_mode_pullout) {

        this->integral_values.push_back(error);

        this->integral_part = std::accumulate(this->integral_values.begin(),
                                              this->integral_values.end(),
                                              0.0f);
        this->integral_part *= 1.0f / this->ti;
    } else {

        this->integral_part += 1.0f * error / this->ti;
    }
}

void PID::run_derivative(float error)
{
    const float derivative = (error - this->previous_value);

    qDebug() << "derivative: " << derivative;

    this->previous_value = error;
    this->derivative_part = derivative * this->td;
}

void PID::run_proportional(float error)
{
    this->proportional_part = error * this->kp;
}

void PID::reset()
{
    this->integral_values.clear();

    this->integral_part = 0;
    this->derivative_part = 0;
    this->proportional_part = 0;
    this->previous_value = 0;
}

float PID::run(float error)
{
    this->run_integral(error);
    this->run_derivative(error);
    this->run_proportional(error);

    return this->integral_part + this->derivative_part + this->proportional_part;
}
void PID::set_integral_mode_pullout(bool mode)
{
    this->integral_mode_pullout = mode;
}
