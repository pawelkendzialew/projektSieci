#ifndef GENERATOR_H
#define GENERATOR_H

enum class GeneratorType {
    sine,
    square,
    triangle,
    sawtooth,
    single_jump,
};

class Generator
{
public:
    Generator();

    float run(float time);

    void set_frequency(float frequency);
    void set_amplitude(float amplitude);
    void set_type(GeneratorType type);
    void set_infill(float infill);

    float get_frequency() const;
    float get_amplitude() const;
    float get_infill() const;

    GeneratorType get_type() const;

private:
    GeneratorType type{GeneratorType::sine};

    float frequency{100};
    float amplitude{1};
    float infill{50};
};

#endif // GENERATOR_H
