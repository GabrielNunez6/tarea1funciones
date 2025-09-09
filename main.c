#include <stdio.h>

#include "aleatorio.h"

int main(void) {
initAleatorio();
    char palo;
    palo=paloAleatorio();
    printf("El palo es %c", palo);
    return 0;
}
