// tablero.cpp

// Aqui van a ir todas las funciones relacionadas con el tablero
// del juego: crearlo, mostrarlo, modificarlo, etc.
//
// Por ahora solo tiene mostrarTablero() porque es lo único
// que pude implementar en este avance. Las funciones para
// manejar el tablero con bits y memoria dinamica se diseñarán después.

#include "juego.h"

// mostrarTablero()
// Dibuja el tablero en pantalla usando caracteres de texto.
// Recibe el ancho y el alto para saber que tan grande dibujarlo.
//
// Por ahora el tablero siempre se muestra completamente vacío
// porque todavía no tengo implementada la lógica del juego.
//
// Use '.' para las celdas vacias y bordes con '+', '-' y '|'
// para que se vea como una cuadricula.
void mostrarTablero(int ancho, int alto) {

    // Imprimir el borde superior del tablero.
    // Un '+' en cada esquina y un '-' por cada columna.
    cout << "+";
    for (int j = 0; j < ancho; j++) {
        cout << "-";
    }
    cout << "+" << endl;

    // Imprimir cada fila del tablero.
    // Un '|' al inicio y al final de cada fila como bordes laterales.
    // Un '.' por cada celda porque por ahora todo esta vacío.
    for (int i = 0; i < alto; i++) {
        cout << "|";
        for (int j = 0; j < ancho; j++) {
            cout << ".";
        }
        cout << "|" << endl;
    }

    // Imprimir el borde inferior, igual que el superior.
    cout << "+";
    for (int j = 0; j < ancho; j++) {
        cout << "-";
    }
    cout << "+" << endl;
}
