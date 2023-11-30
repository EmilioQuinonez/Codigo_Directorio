#ifndef NUMEROTELEFONOPROFESIONAL_H
#define NUMEROTELEFONOPROFESIONAL_H
// La clase NumeroTelefonoProfesional (que tiene una herencia de la clase NumeroTelefono) crea un objeto donde Numero telefono profesional que tiene valores como numero, tipo de telefono(estos que son atributos de la clase NumeroTelefono), empresa y cargo. Todos estos valores se envian a contacto.
#include "NumeroTelefono.h" // Incluimos la definición de la clase padre NumeroTelefono
#include <string>

using namespace std;

class NumeroTelefonoProfesional : public NumeroTelefono {
private:
    string empresa; // Empresa del objeto NumeroTelefonoProfesional. 
    string cargo; // Cargo del objeto NumeroTelefonoProfesional. 

public:
    NumeroTelefonoProfesional(); // Constructor de la clase NumeroTelefonoProfesional.
    string obtenerEmpresa(); // Método para obtener el nombre de la empresa.
    string obtenerCargo(); // Método para obtener el cargo.
    void asignarEmpresa(string empresa); // Método para asignar el nombre de la empresa.
    void asignarCargo(string cargo); // Método para asignar el cargo.
    void asignarNumero(string numero); // Método para asignar el número de teléfono(que es un atributo de la clase NumeroTelefono).
    void asignarTipo(string tipoTelefono); // Método para asignar el tipo de teléfono(que es un atributo de la clase NumeroTelefono).
};

#endif
