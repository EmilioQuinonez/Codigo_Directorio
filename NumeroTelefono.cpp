#include "NumeroTelefono.h"

using namespace std;

NumeroTelefono::NumeroTelefono() {}

string NumeroTelefono::obtenerTipo() {
    return tipoTelefono;
}

string NumeroTelefono::obtenerNumero() {
    return numero;
}

void NumeroTelefono::modificarTipo(string tipo) {
    tipoTelefono = tipo;
}

void NumeroTelefono::modificarNumero(string numero) {
    this->numero = numero;
}
