#ifndef CONTACTO_H
#define CONTACTO_H

#include <string>
#include "Direccion.h"
#include "NumeroTelefonoProfesional.h"

using namespace std;

class Contacto {
private:
    string nombre;
    string email;
    Direccion direccion;
    NumeroTelefonoProfesional numeroTelefono;

public:
    Contacto();
    void agregarNombre(string nombre);
    void agregarEmail(string email);
    void agregarDatosTelefono(string numero, string tipo, string empresa, string cargo);
    void agregarDatosDireccion(string calle, string ciudad, string codigoPostal, string estado, string pais);
    string obtenerInformacionContacto();
};

#endif
