#ifndef PINGUINONORMAL_HPP
#define PINGUINONORMAL_HPP

#include "pinguino.hpp"
#include <string>

using namespace std;

class PinguinoNormal : public Pinguino {
    string nombre;
public:
    PinguinoNormal(string nombre);
    void nadar() const override;
    string getNombre() const override;
};

#endif