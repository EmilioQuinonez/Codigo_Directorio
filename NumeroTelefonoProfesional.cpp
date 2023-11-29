#include "NumeroTelefonoProfesional.h"

using namespace std;

NumeroTelefonoProfesional::NumeroTelefonoProfesional() : NumeroTelefono() {}

string NumeroTelefonoProfesional::obtenerEmpresa() {
    return empresa;
}

string NumeroTelefonoProfesional::obtenerCargo() {
    return cargo;
}

void NumeroTelefonoProfesional::asignarNumeroCompleto(string numero, string tipoTelefono, string empresa, string cargo) {
    NumeroTelefono::modificarNumero(numero);
    NumeroTelefono::modificarTipo(tipoTelefono);
    this->empresa = empresa;
    this->cargo = cargo;
}
