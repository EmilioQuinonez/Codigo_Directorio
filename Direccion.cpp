#include "Direccion.h"

using namespace std;

Direccion::Direccion() {}

string Direccion::obtenerDireccionCompleta() {
    return "\n"
           "Calle: " + calle + "\n" +
           "Ciudad: " + ciudad + "\n" +
           "Código Postal: " + codigoPostal + "\n" +
           "Estado: " + estado + "\n" +
           "País: " + pais + "\n";
}

void Direccion::modificarDireccion(string calle, string ciudad, string codigoPostal, string estado, string pais) {
    this->calle = calle;
    this->ciudad = ciudad;
    this->codigoPostal = codigoPostal;
    this->estado = estado;
    this->pais = pais;
}
