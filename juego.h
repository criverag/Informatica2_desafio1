// juego.h
// Archivo de cabecera principal del proyecto.
//
// 
//   - Se agregan dos constantes para los limites del tablero.
//   - Se agrega el prototipo de pedirDimensiones() que es
//     una funcion nueva agergada en menu.cpp
//   - Se agrega el prototipo de mostrarTablero() que es
//     la primera funcion del archivo tablero.cpp 
//     
//
// La idea es que cuando el usuario elija
// "Jugar partida nueva", el programa le pida las dimensiones
// del tablero y lo muestre vacio en pantalla.

#ifndef JUEGO_H
#define JUEGO_H

#include <iostream>

using namespace std;

// Limites del tablero definido: múltiplo de 8 (para facilitar el manejo de bytes).
// Los pongo como constantes para no escribir el numero
// directamente en el código (lo que se llama "magic number").
// Si en algun momento cambia el minimo, solo lo cambio aqui.
const int ANCHO_MINIMO = 8;
const int ALTO_MINIMO  = 8;
const int ANCHO_MAXIMO = 32;  // limitado porque uso unsigned int por fila

// -----------------------------------------------
// Prototipos de menu.cpp
// -----------------------------------------------
void mostrarMenu();
void mostrarInstrucciones();
void iniciarJuego();         
bool pedirDimensiones(int& ancho, int& alto);  // funcion nueva

// -----------------------------------------------
// Prototipos de tablero.cpp  (archivo nuevo)
// -----------------------------------------------
void mostrarTablero(int ancho, int alto);

#endif
