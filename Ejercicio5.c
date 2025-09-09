#include <stdio.h>
#include "aleatorio.h"
#include "aleatorio.c"

int main() {
    initAleatorio();
    int carta1=numeroCartaAleatorio();
    int carta2=numeroCartaAleatorio();
    char palo1=paloAleatorio();
    char palo2=paloAleatorio();
    printf("Carta 1\n");
    crearCarta(carta1, palo1);
    printf("\n");
    printf("\n");
    printf("Carta 2\n");
    crearCarta(carta2, palo2);
    printf("\n");
    printf("Es el mismo Palo?\n");
    bool resultado=compararValor(palo1, palo2);
return 0;
}