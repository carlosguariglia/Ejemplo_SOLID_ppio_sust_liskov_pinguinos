#include "../include/pinguinorapido.hpp"
#include <iostream>

using namespace std;

PinguinoRapido::PinguinoRapido(string nombre) : nombre(nombre) {}

void PinguinoRapido::nadar() const {
    cout << nombre << " esta nadando a gran velocidad!\n";
}

string PinguinoRapido::getNombre() const {
    return nombre;
}