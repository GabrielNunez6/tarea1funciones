#include <stdio.h>
#include "aleatorio.h"
#include "aleatorio.c"

int main() {
    initAleatorio();
    int valor1, valor2, valor3;
    char palo1, palo2, palo3;
    int sumaCartas;
    valor1=numeroCartaAleatorio();
    palo1=paloAleatorio();
    valor2=numeroCartaAleatorio();
    palo2=paloAleatorio();
    valor3=numeroCartaAleatorio();
    palo3=paloAleatorio();
    printf("Carta 1:\n");
    crearCarta(valor1, palo1);
    printf("\n");
    printf("Carta 2:\n");
    crearCarta(valor2, palo2);
    printf("\n");
    printf("Carta 3:\n");
    crearCarta(valor3, palo3);
    printf("\n");
    sumaCartas = sumarValor(valor1, valor2, valor3);
    printf("La suma de las cartas es %d", sumaCartas);
    return 0;
}