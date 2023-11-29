#ifndef NUMEROTELEFONO_H
#define NUMEROTELEFONO_H

#include <string>

using namespace std;

class NumeroTelefono {
protected:
    string tipoTelefono;
    string numero;

public:
    NumeroTelefono();
    std::string obtenerTipo();
    std::string obtenerNumero();
    void modificarTipo(string tipo);
    void modificarNumero(string numero);
};

#endif
