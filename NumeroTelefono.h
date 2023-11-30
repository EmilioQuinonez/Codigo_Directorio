#ifndef NUMEROTELEFONO_H
#define NUMEROTELEFONO_H
// La clase NumeroTelefono crea un objeto numeroTelefono que incluye valores como el tipo de telefono y numero del contacto. Todos estos valores se envian a contacto.
#include <string>

using namespace std;

class NumeroTelefono {
protected:
    string tipoTelefono; // Tipo de telefono del objeto NumeroTelefono. 
    string numero; // Numero de telefono del objeto NumeroTelefono. 

public:
    NumeroTelefono(); // Constructor de la clase NumeroTelefono.
    std::string obtenerTipo(); // Método para obtener el tipo de teléfono.
    std::string obtenerNumero(); // Método para obtener el número de teléfono.
    void modificarTipo(string tipo); // Método para establecer el tipo de teléfono.
    void modificarNumero(string numero); // Método para establecer el número de teléfono.
};

#endif#ifndef NUMEROTELEFONO_H
#define NUMEROTELEFONO_H
// La clase NumeroTelefono crea un objeto numeroTelefono que incluye valores como el tipo de telefono y numero del contacto. Todos estos valores se envian a contacto.
#include <string>

using namespace std;

class NumeroTelefono {
protected:
    string tipoTelefono; // Tipo de telefono del objeto NumeroTelefono. 
    string numero; // Numero de telefono del objeto NumeroTelefono. 

public:
    NumeroTelefono(); // Constructor de la clase NumeroTelefono.
    std::string obtenerTipo(); // Método para obtener el tipo de teléfono.
    std::string obtenerNumero(); // Método para obtener el número de teléfono.
    void modificarTipo(string tipo); // Método para establecer el tipo de teléfono.
    void modificarNumero(string numero); // Método para establecer el número de teléfono.
};

#endif
