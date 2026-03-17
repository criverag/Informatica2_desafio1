// main.cpp
// Punto de entrada del programa.
// Aqui esta el ciclo principal que mantiene el menu funcionando.

#include "juego.h"

int main() {

    int opcion;

    // Uso do-while porque quiero que el menu se muestre
    // al menos una vez antes de verificar si el usuario quiere salir.
    // Con un while normal tendria que mostrar el menu antes del ciclo
    // y eso me parece mas confuso.
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

            // Si el usuario escribe algo que no es 0, 1 ni 2
            // el default le avisa que esa opcion no existe
            // y el do-while vuelve a mostrar el menu.
            default:
                cout << "Opcion invalida. Intenta de nuevo." << endl;
                break;
        }

    } while (opcion != 0);

    return 0;
}
