#ifndef NUMEROTELEFONOPROFESIONAL_H
#define NUMEROTELEFONOPROFESIONAL_H

#include "NumeroTelefono.h"
#include <string>

using namespace std;

class NumeroTelefonoProfesional : public NumeroTelefono {
private:
    string empresa;
    string cargo;

public:
    NumeroTelefonoProfesional();
    string obtenerEmpresa();
    string obtenerCargo();
    void asignarNumeroCompleto(string numero, string tipoTelefono, string empresa, string cargo);
};

#endif
