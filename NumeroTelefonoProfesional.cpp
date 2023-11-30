#include "NumeroTelefonoProfesional.h"

using namespace std;

NumeroTelefonoProfesional::NumeroTelefonoProfesional() : NumeroTelefono() {}

string NumeroTelefonoProfesional::obtenerEmpresa() {
    return empresa;
}

string NumeroTelefonoProfesional::obtenerCargo() {
    return cargo;
}

void NumeroTelefonoProfesional::asignarNumero(string numero) {
    NumeroTelefono::modificarNumero(numero);
}

void NumeroTelefonoProfesional::asignarTipo(string tipoTelefono) {
    NumeroTelefono::modificarTipo(tipoTelefono);
}

void NumeroTelefonoProfesional::asignarEmpresa(string empresa) {
    this->empresa = empresa;
}

void NumeroTelefonoProfesional::asignarCargo(string cargo) {
    this->cargo = cargo;
}
