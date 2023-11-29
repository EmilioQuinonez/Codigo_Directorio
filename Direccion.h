#ifndef DIRECCION_H
#define DIRECCION_H

#include <string>

using namespace std;

class Direccion {
private:
    string calle;
    string ciudad;
    string codigoPostal;
    string estado;
    string pais;

public:
    Direccion();
    string obtenerDireccionCompleta();
    void modificarDireccion(string calle, string ciudad, string codigoPostal, string estado, string pais);
};

#endif
