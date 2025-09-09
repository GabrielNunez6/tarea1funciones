#include <stdio.h>
#include "aleatorio.h"
#include "aleatorio.c"

int main() {
    initAleatorio();
    int numero;
    numero=numeroCartaAleatorio();
    printf("El numero es %d", numero);
    return 0;
}