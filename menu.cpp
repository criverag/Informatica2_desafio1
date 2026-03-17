// menu.cpp
// Aqui van todas las funciones que tienen que ver con
// lo que el usuario verá en pantalla y las opciones que puede elegir.
// Las separo de main.cpp para tener el codigo mas organizado.

#include "juego.h"

// mostrarMenu()
// Esta funcion imprime las opciones disponibles en pantalla.
// La hice como funcion separada y no directo en el main porque
// el menu se va a mostrar varias veces (cada vez que el usuario
// regresa de una opcion) y no quiero repetir el mismo codigo.
void mostrarMenu() {
    cout << endl;
    cout << "================================" << endl;
    cout << "   TETRIS - TETRIS - TETRIS     " << endl;
    cout << "   Informatica II - 2026-1      " << endl;
    cout << "================================" << endl;
    cout << "  1. Jugar partida nueva"         << endl;
    cout << "  2. Instrucciones"               << endl;
    cout << "  0. Salir"                       << endl;
    cout << "--------------------------------" << endl;
    cout << "Elige una opcion: ";
}

// mostrarInstrucciones()
// Muestra una explicacion basica de como se juega.
// Por ahora es solo texto porque todavia no tengo implementada
// la logica del juego. Lo dejé indicado para saber
// que esta opcion va a existir.
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

    // Esto es para esperar a que el usuario presione algo
    // antes de volver al menu principal
    char c;
    cin >> c;
}

// iniciarJuego()
// Por ahora esta funcion solo imprime un mensaje porque
// todavia no tengo implementado el juego como tal.
// La deje declarada para que el switch en main.cpp
// no quede incompleto y el programa compile sin problemas.
void iniciarJuego() {
    cout << endl;
    cout << "El juego aun no esta implementado." << endl;
    cout << "Proximamente..." << endl;
}
