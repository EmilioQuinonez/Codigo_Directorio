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
    void asignarEmpresa(string empresa);
    void asignarCargo(string cargo);
    void asignarNumero(string numero);
    void asignarTipo(string tipoTelefono);
};

#endif
