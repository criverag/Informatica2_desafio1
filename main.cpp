// main.cpp
// Punto de entrada del programa.
//
// Esto me pareció buena manera de manejar el código. En
// archivos separador me permite agregar funciones nuevas
// sin editar de manera reiterada el archivo main.cpp.

#include "juego.h"

int main() {

    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {

            case 1:
                iniciarJuego();
                break;

            case 2:
                mostrarInstrucciones();
                break;

            case 0:
                cout << "Hasta luego." << endl;
                break;

            default:
                cout << "Opcion invalida. Intenta de nuevo." << endl;
                break;
        }

    } while (opcion != 0);

    return 0;
}
