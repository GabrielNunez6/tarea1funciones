#include <stdio.h>
#include "aleatorio.h"
#include "aleatorio.c"

int main() {
    initAleatorio();
    int numeroCarta;
    char Palo;
    numeroCarta=numeroCartaAleatorio();
    Palo=paloAleatorio();
    crearCarta(numeroCarta, Palo);
    return 0;

}