#include "Contacto.h"

using namespace std;

Contacto::Contacto() {}

void Contacto::agregarNombre(string nombre) {
    this->nombre = nombre;
}

void Contacto::agregarEmail(string email) {
    this->email = email;
}

void Contacto::agregarDatosDireccion(string calle, string ciudad, string codigoPostal, string estado, string pais) {
    direccion.modificarCalle(calle);
    direccion.modificarCiudad(ciudad);
    direccion.modificarCodigoPostal(codigoPostal);
    direccion.modificarEstado(estado);
    direccion.modificarPais(pais);
}

void Contacto::agregarDatosTelefono(string numero, string tipo, string empresa, string cargo) {
    numeroTelefono.asignarNumero(numero);
    numeroTelefono.asignarTipo(tipo);
    numeroTelefono.asignarEmpresa(empresa);
    numeroTelefono.asignarCargo(cargo);
}

string Contacto::obtenerInformacionContacto() {
    string infoContacto = "Nombre: " + nombre + "\n";
    infoContacto += "Email: " + email + "\n";
    infoContacto += "Dirección: " + direccion.obtenerCalle() + direccion.obtenerCiudad() + direccion.obtenerCodigoPostal() + direccion.obtenerEstado() + direccion.obtenerPais() + "\n";
    infoContacto += "Teléfono: " + numeroTelefono.obtenerNumero() + " (" + numeroTelefono.obtenerTipo() + ")\n";
    infoContacto += "Empresa: " + numeroTelefono.obtenerEmpresa() + "\n";
    infoContacto += "Cargo: " + numeroTelefono.obtenerCargo() + "\n";

    return infoContacto;
}
