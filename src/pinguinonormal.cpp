#include "../include/pinguinonormal.hpp"
#include <iostream>

using namespace std;

PinguinoNormal::PinguinoNormal(string nombre) : nombre(nombre) {}

void PinguinoNormal::nadar() const {
    cout << nombre << " esta nadando elegantemente!\n";
}

string PinguinoNormal::getNombre() const {
    return nombre;
}