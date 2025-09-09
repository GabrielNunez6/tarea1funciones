//
// Created by Cecilia Curlango on 8/19/25.
//
// Funciones que contienen comportamientos que requiere
// números aleatorios.
#include <stdbool.h>
#include <stdio.h>
#ifndef ALEATORIO_H
#define ALEATORIO_H
#include <stdlib.h>
#include <time.h>
int numeroAleatorio(int maximo);
int numeroAleatorioConRango(int minimo,int maximo);
int lanzarDado();
void initAleatorio();
char paloAleatorio();
int numeroCartaAleatorio();
void crearCarta(int numero, char palo);
bool compararValor(int numero1, int numero2);


#endif //ALEATORIO_H