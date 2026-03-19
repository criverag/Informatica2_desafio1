// menu.cpp
// Funciones de interaccion con el usuario.
//
// Cambios respecto al commit anterior:
//   - iniciarJuego() ya no dice "proximamente". Ahora llama
//     a pedirDimensiones() y a mostrarTablero() para empezar
//     a construir el juego.
//   - Se agrega pedirDimensiones() que es la funcion que le
//     pide al usuario el ancho y el alto del tablero y verifica
//     que los valores sean validos (múltiplos de 8).

#include "juego.h"

// mostrarMenu()
void mostrarMenu() {
    cout << endl;
    cout << "================================" << endl;
    cout << "   TETRIS - Manipulacion bits   " << endl;
    cout << "   Informatica II - 2026-1      " << endl;
    cout << "================================" << endl;
    cout << "  1. Jugar partida nueva"         << endl;
    cout << "  2. Instrucciones"               << endl;
    cout << "  0. Salir"                       << endl;
    cout << "--------------------------------" << endl;
    cout << "Elige una opcion: ";
}

// mostrarInstrucciones()
void mostrarInstrucciones() {
    cout << endl;
    cout << "=== INSTRUCCIONES ===" << endl;
    cout << "El objetivo es completar filas horizontales." << endl;
    cout << "Usa las siguientes teclas durante el juego:"  << endl;
    cout << "  A -> mover la pieza a la izquierda"         << endl;
    cout << "  D -> mover la pieza a la derecha"           << endl;
    cout << "  S -> bajar la pieza"                        << endl;
    cout << "  W -> rotar la pieza"                        << endl;
    cout << "  Q -> salir del juego"                       << endl;
    cout << endl;
    cout << "Presiona Enter para volver al menu...";
    char c;
    cin >> c;
}

// pedirDimensiones()
// Esta es la funcion nueva.
//
// Le pide al usuario que ingrese el ancho y el alto del tablero
// y verifica que los valores cumplan las reglas del desafio:
//   - El ancho debe estar entre ANCHO_MINIMO y ANCHO_MAXIMO.
//   - El ancho debe ser multiplo de 8 (facilita el manejo de bytes con bits).
//   - El alto debe ser al menos ALTO_MINIMO.
//
// Los valores que escriba el usuario quedan
// guardados en las variables de iniciarJuego() para poder
// usarlos después.
//
// Retorna true si los valores son válidos, false en caso contrario.
// Cuando se llame a esta función se sabrá si puede continuar o no.
bool pedirDimensiones(int& ancho, int& alto) {

    cout << endl;
    cout << "--- Configuracion del tablero ---"   << endl;
    cout << "El ancho debe ser multiplo de 8,"    << endl;
    cout << "entre " << ANCHO_MINIMO
         << " y "    << ANCHO_MAXIMO << "."       << endl;
    cout << "El alto debe ser minimo "
         << ALTO_MINIMO << "."                    << endl;
    cout << endl;

    cout << "Ingresa el ancho: ";
    cin  >> ancho;

    // Verifico primero el rango del ancho
    if (ancho < ANCHO_MINIMO || ancho > ANCHO_MAXIMO) {
        cout << "Error: el ancho debe estar entre "
             << ANCHO_MINIMO << " y " << ANCHO_MAXIMO << "." << endl;
        return false;
    }

    // Luego verifico que sea multiplo de 8.
    // El operador % da el residuo de la division.
    // Si ancho % 8 es 0, significa que es multiplo exacto.
    if (ancho % 8 != 0) {
        cout << "Error: el ancho debe ser multiplo de 8." << endl;
        return false;
    }

    cout << "Ingresa el alto: ";
    cin  >> alto;

    if (alto < ALTO_MINIMO) {
        cout << "Error: el alto debe ser al menos "
             << ALTO_MINIMO << "." << endl;
        return false;
    }

    return true;
}

// iniciarJuego()
//
//   1. Llama a pedirDimensiones() para obtener el tamaño
//      del tablero que quiere el usuario.
//   2. Si las dimensiones son validas, llama a mostrarTablero()
//      para dibujar el tablero vacío en pantalla.
//
// While para repetir la solicitud si el usuario
// ingresa valores inválidos. Se pide al usaurio intentarlo de nuevo.
// NO se termina el programa, no arroja error.
// Me parece mas amigable para el usuario.
void iniciarJuego() {

    int  ancho             = 0;
    int  alto              = 0;
    bool dimensionesValidas = false;

    while (!dimensionesValidas) {
        dimensionesValidas = pedirDimensiones(ancho, alto);

        if (!dimensionesValidas) {
            cout << "Por favor intenta de nuevo." << endl;
        }
    }

    cout << endl;
    cout << "Tablero de " << ancho << " x " << alto << ":" << endl;

    // Se invoca mostrarTablero que esta definida en tablero.cpp
    mostrarTablero(ancho, alto);
}
