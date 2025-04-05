#include "../include/acuario.hpp"
#include <iostream>

using namespace std;

void Acuario::agregarPinguino(Pinguino* p) {
    pinguinos.push_back(p);
}

void Acuario::hacerNadarATodos() const {
    for (auto p : pinguinos) {
        p->nadar();
    }
}

void Acuario::mostrarCantidad() const {
    cout << "El acuario tiene " << pinguinos.size() 
         << " pinguinos nadadores\n";
}

Acuario::~Acuario() {
    for (auto p : pinguinos) {
        delete p;
    }
}