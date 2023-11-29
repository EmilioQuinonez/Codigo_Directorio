#include "Contacto.h"

using namespace std;

Contacto::Contacto() {}

void Contacto::agregarNombre(string nombre) {
    this->nombre = nombre;
}

void Contacto::agregarEmail(string email) {
    this->email = email;
}

void Contacto::agregarDireccion(string calle, string ciudad, string codigoPostal, string estado, string pais) {
    direccion.modificarDireccion(calle, ciudad, codigoPostal, estado, pais);
}

void Contacto::agregarTelefono(string numero, string tipo, string empresa, string cargo) {
    numeroTelefono.asignarNumeroCompleto(numero, tipo, empresa, cargo);
}

string Contacto::obtenerInformacionContacto() {
    string infoContacto = "Nombre: " + nombre + "\n";
    infoContacto += "Email: " + email + "\n";
    infoContacto += "Dirección: " + direccion.obtenerDireccionCompleta() + "\n";
    infoContacto += "Teléfono: " + numeroTelefono.obtenerNumero() + " (" + numeroTelefono.obtenerTipo() + ")\n";
    infoContacto += "Empresa: " + numeroTelefono.obtenerEmpresa() + "\n";
    infoContacto += "Cargo: " + numeroTelefono.obtenerCargo() + "\n";

    return infoContacto;
}

