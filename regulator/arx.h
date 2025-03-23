#ifndef ARX_H
#define ARX_H

#include <vector>

enum class NoiseType {
    normal,
    uniform,
    triangular,
    exponential,
    laplace,
    poisson,
    gamma,
    beta,
};

class ARX
{
public:
    ARX();

    void set_a(std::vector<float> a);
    void set_b(std::vector<float> b);

    void set_noise(float noise);
    void set_delay(size_t delay);
    void set_noise_type(NoiseType type);

    std::vector<float> get_a() const;
    std::vector<float> get_b() const;

    float get_noise() const;
    size_t get_delay() const;

    NoiseType get_noise_type() const;

    float noise_part{0};

    void run_noise();
    float run(float input);

    void reset();

private:
    std::vector<float> A{0.1f};
    std::vector<float> B{0.1f};
    std::vector<float> u;
    std::vector<float> y;

    size_t delay{2};

    NoiseType noise_type{NoiseType::normal};

    float noise{0.01};
};

#endif // ARX_H
