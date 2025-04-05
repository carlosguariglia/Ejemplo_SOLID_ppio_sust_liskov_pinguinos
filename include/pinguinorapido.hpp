#ifndef PINGUINORAPIDO_HPP
#define PINGUINORAPIDO_HPP

#include "pinguino.hpp"
#include <string>

using namespace std;

class PinguinoRapido : public Pinguino {
    string nombre;
public:
    PinguinoRapido(string nombre);
    void nadar() const override;
    string getNombre() const override;
};

#endif