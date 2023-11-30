#include "Direccion.h"

using namespace std;

Direccion::Direccion() {}

string Direccion::obtenerCalle() {
    return "\nCalle: " + calle + "\n";
}

string Direccion::obtenerCiudad() {
    return "Ciudad: " + ciudad + "\n";
}

string Direccion::obtenerCodigoPostal() {
    return "Código Postal: " + codigoPostal + "\n";
}

string Direccion::obtenerEstado() {
    return "Estado: " + estado + "\n";
}

string Direccion::obtenerPais() {
    return "País: " + pais + "\n";
}

void Direccion::modificarCalle(string calle) {
    this->calle = calle;
}
    
void Direccion::modificarCiudad(string ciudad) {
    this->ciudad = ciudad;
}

void Direccion::modificarCodigoPostal(string codigoPostal) {
    this->codigoPostal = codigoPostal;
}
    
void Direccion::modificarEstado(string estado) {
    this->estado = estado;
}

void Direccion::modificarPais(string pais) {
    this->pais = pais;
}
