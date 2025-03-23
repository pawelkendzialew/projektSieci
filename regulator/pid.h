#ifndef PID_H
#define PID_H

#include <vector>

class PID
{
public:
    PID();
    void set_kp(float kp);
    void set_ti(float ti);
    void set_td(float td);

    float get_kp() const;
    float get_ti() const;
    float get_td() const;

    float integral_part{0};
    float derivative_part{0};
    float proportional_part{0};

    void run_integral(float error);
    void run_derivative(float error);
    void run_proportional(float error);

    float run(float error);

    void reset();

    void set_integral_mode_pullout(bool mode);

private:
    float kp{1};
    float ti{1};
    float td{1};

    float previous_value{0};
    bool integral_mode_pullout{true};

    std::vector<float> integral_values;
};

#endif // PID_H
