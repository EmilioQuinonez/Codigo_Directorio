#ifndef DIRECCION_H
#define DIRECCION_H

#include <string>

using namespace std;

class Direccion {
private:
    string calle; // Nombre de la calle del objeto Direccion. 
    string ciudad; // Nombre de la ciudad del objeto Direccion. 
    string codigoPostal; // Nombre del codio postal del objeto Direccion. 
    string estado; // Nombre del estado del objeto Direccion. 
    string pais; // Nombre del pais del objeto Direccion. 

public:
    Direccion(); // Constructor de la clase Direccion.
    string obtenerCalle(); // Método para obtener el nombre de la calle.
    string obtenerCiudad(); // Método para obtener el nombre de la ciudad.
    string obtenerCodigoPostal(); // Método para obtener el código postal.
    string obtenerEstado(); // Método para obtener el estado.
    string obtenerPais(); // Método para obtener el nombre del país.
    void modificarCalle(string calle); // Método para establecer  el nombre de la calle.
    void modificarCiudad(string ciudad); // Método para establecer  el nombre de la ciudad.
    void modificarCodigoPostal(string codigoPostal); // Método para establecer  el código postal.
    void modificarEstado(string estado); // Método para establecer  el estado o provincia.
    void modificarPais(string pais); // Método para establecer  el nombre del país.
};

#endif
