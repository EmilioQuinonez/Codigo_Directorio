#include <iostream>
#include <string>

#include "Contacto.cpp"
#include "NumeroTelefonoProfesional.cpp"
#include "NumeroTelefono.cpp"
#include "Direccion.cpp"
#include "NumeroTelefonoProfesional.h"
#include "NumeroTelefono.h"
#include "Direccion.h"
#include "Contacto.h"

using namespace std;

void menu() {
    cout << "\n*** ¿Deseas agregar un contacto? ***" << endl;
    cout << "1. Si" << endl;
    cout << "2. No" << endl;
};

int main() {
    bool continua = true;
    while (continua) {
        menu();
        int opcion;
        cout << "Elige una opción(solo escribe el número): ";
        cin >> opcion;

        if (opcion == 1) {
            string nombre, email, calle, ciudad, codigoPostal, estado, pais, numero, tipo, empresa, cargo;
            Contacto nuevoContacto;

            cout << "\nIngrese el nombre completo del contacto: ";
            cin.ignore();
            getline(cin, nombre);

            cout << "Ingrese el correo electrónico del contacto: ";
            getline(cin, email);

            cout << "\nIngrese la dirección del contacto: " << endl;
            cout << "Calle: ";
            getline(cin, calle);
            cout << "Ciudad: ";
            getline(cin, ciudad);
            cout << "Código Postal: ";
            getline(cin, codigoPostal);
            cout << "Estado: ";
            getline(cin, estado);
            cout << "País: ";
            getline(cin, pais);

            nuevoContacto.agregarNombre(nombre);
            nuevoContacto.agregarEmail(email);
            nuevoContacto.agregarDatosDireccion(calle, ciudad, codigoPostal, estado, pais);

            cout << "\nIngrese el número de teléfono del contacto: ";
            getline(cin, numero);

            cout << "Ingrese el tipo de número (celular, fijo, etc.): ";
            getline(cin, tipo);

            bool continua_1 = true;
            while (continua_1) {
                int respuesta;
                cout << "\n¿Es un número telefónico empresarial?" << endl;
                cout << "1. Si" << endl;
                cout << "2. No" << endl;
                cout << "Elige una opción(solo escribe el número): ";
                cin >> respuesta;

                if (respuesta == 1) {
                    cout << "Ingrese la empresa: ";
                    cin.ignore();
                    getline(cin, empresa);

                    cout << "Ingrese el cargo en la empresa: ";
                    getline(cin, cargo);
                    
                    continua_1 = false;
                }

                else if (respuesta == 2) {
                    empresa = "No aplica.";
                    cargo = "No aplica.";

                    continua_1 = false;
                }

                else {
                    cout << "\nError, selecciona una opción valida." << endl;
                }

            }

            nuevoContacto.agregarDatosTelefono(numero, tipo, empresa, cargo);

            cout << "\n*** INFORMACIÓN DEL CONTACTO AGREGADO ***\n";
            cout << nuevoContacto.obtenerInformacionContacto() << endl;
        }

        else if (opcion == 2) {
            cout << "\nNos vemos pronto." << endl;
            continua = false;
        }

        else {
            cout << "\nError, selecciona una opción valida." << endl;
        }
    }
    return 0;
}
