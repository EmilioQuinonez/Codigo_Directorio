#ifndef CONTACTO_H
#define CONTACTO_H
// La clase Contacto (que tiene composicion con Direccion y NumeroTelefonoProfesional) genera un contacto que incluye nombre, email, direccion y numero de telefono. Todos estos valores los recibe desde el main.
#include <string>
#include "Direccion.h" // Incluimos la definición de la clase Direccion porque ocupamos elementos de esta clase.
#include "NumeroTelefonoProfesional.h" // Incluimos la definición de la clase NumeroTelefonoProfesional porque ocupamos elementos de esta clase.


using namespace std;

class Contacto {
private:
    string nombre; // Nombre del contacto.
    string email; // Correo electrónico del contacto.
    Direccion direccion; // Objeto Direccion que representa la dirección del contacto.
    NumeroTelefonoProfesional numeroTelefono; // Objeto NumeroTelefonoProfesional que representa el número de teléfono del contacto.

public:
    Contacto(); // Constructor de la clase Contacto
    void agregarNombre(string nombre); // Método para establecer el nombre del contacto
    void agregarEmail(string email); // Método para establecer el email del contacto
    void agregarDatosTelefono(string numero, string tipo, string empresa, string cargo); // Método para establecer los datos del teléfono del contacto
    void agregarDatosDireccion(string calle, string ciudad, string codigoPostal, string estado, string pais); // Método para establecer los datos de la dirección del contacto
    string obtenerInformacionContacto(); // Método para obtener la información completa del contacto
};

#endif

