#ifndef PINGUINO_HPP
#define PINGUINO_HPP

#include <string>

class Pinguino {
public:
    virtual ~Pinguino() = default;
    virtual void nadar() const = 0;
    virtual std::string getNombre() const = 0;
};

#endif