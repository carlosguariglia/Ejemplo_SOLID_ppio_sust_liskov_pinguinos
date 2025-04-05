#ifndef ACUARIO_HPP
#define ACUARIO_HPP

#include "pinguino.hpp"
#include <list>

using namespace std;

class Acuario {
    list<Pinguino*> pinguinos;
public:
    void agregarPinguino(Pinguino* p);
    void hacerNadarATodos() const;
    void mostrarCantidad() const;
    ~Acuario();
};

#endif