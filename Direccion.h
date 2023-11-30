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
    string obtenerCalle();
    string obtenerCiudad();
    string obtenerCodigoPostal();
    string obtenerEstado();
    string obtenerPais();
    void modificarCalle(string calle);
    void modificarCiudad(string ciudad);
    void modificarCodigoPostal(string codigoPostal);
    void modificarEstado(string estado);
    void modificarPais(string pais);
};

#endif
