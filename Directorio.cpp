#include <iostream>
#include <string>

// Inclusión de los archivos de implementación.
#include "Contacto.cpp"
#include "NumeroTelefonoProfesional.cpp"
#include "NumeroTelefono.cpp"
#include "Direccion.cpp"
#include "NumeroTelefonoProfesional.h"
#include "NumeroTelefono.h"
#include "Direccion.h"
#include "Contacto.h"

using namespace std;

// Función que muestra el menú para agregar un contacto.
void menu() {
    cout << "\n*** ¿Deseas agregar un contacto? ***" << endl;
    cout << "1. Si" << endl;
    cout << "2. No" << endl;
};

int main() {
    // Bucle que permite al usuario decidir si desea seguir agregando contactos
    bool continua = true;
    while (continua) {
        menu();
        int opcion;
        cout << "Elige una opción(solo escribe el número): ";
        cin >> opcion;

        if (opcion == 1) {
            // Declaración de variables para almacenar los datos del contacto.
            string nombre, email, calle, ciudad, codigoPostal, estado, pais, numero, tipo, empresa, cargo;
            Contacto nuevoContacto; // Creación de un nuevo objeto de tipo Contacto.

            // Captura de datos del usuario para el nuevo contacto.
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

            // Asignación de los datos de nombre, email y dirección al nuevo contacto.
            nuevoContacto.agregarNombre(nombre);
            nuevoContacto.agregarEmail(email);
            nuevoContacto.agregarDatosDireccion(calle, ciudad, codigoPostal, estado, pais);

            // Captura de datos para el número de teléfono del contacto.
            cout << "\nIngrese el número de teléfono del contacto: ";
            getline(cin, numero);

            cout << "Ingrese el tipo de número (celular, fijo, etc.): ";
            getline(cin, tipo);

            // Bucle para determinar si el número telefónico es empresarial o no.
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

            // Asignación de los datos del número de teléfono al nuevo contacto
            nuevoContacto.agregarDatosTelefono(numero, tipo, empresa, cargo);

            // Mostrar la información del contacto agregado
            cout << "\n*** INFORMACIÓN DEL CONTACTO AGREGADO ***\n";
            cout << nuevoContacto.obtenerInformacionContacto() << endl;
        }

        // Se sale del bucle del menú y finaliza el programa
        else if (opcion == 2) {
            cout << "\nNos vemos pronto." << endl;
            continua = false;
        }

        // Manejo del error si la opción elegida no es válida
        else {
            cout << "\nError, selecciona una opción valida." << endl;
        }
    }
    return 0;
}
