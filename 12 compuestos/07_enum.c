/*
 * enum
 *
 * Un enum define un conjunto de constantes enteras con nombre. Permite
 * representar valores discretos de forma clara, evitando el uso de
 * números "mágicos" en el código.
 *
 * Si no se especifican valores, el compilador asigna enteros consecutivos
 * empezando en 0. También es posible fijar valores explícitos; a partir
 * de ese punto, los siguientes continúan incrementándose automáticamente.
 * Un enum es un valor numérico y pueden compararse con ellos.
 *
 * Un enum se usa habitualmente para representar estados u opciones.
 * Su principal ventaja aparece cuando se combina con estructuras de
 * control como switch, donde cada caso corresponde a un valor del enum.
 *
 */
#include <stdio.h>

enum state {
    IDLE,        /* 0 */
    RUNNING,     /* 1 */
    ERROR = 10,  /* valor explícito */
    STOPPED      /* 11 */
};

int main(void)
{
    printf("IDLE=%d, RUNNING=%d\n", IDLE, RUNNING);
    printf("ERROR=%d, STOPPED=%d\n", ERROR, STOPPED);

    enum state s = IDLE;
    switch (s) {
        case STOPPED:
            printf("System is off\n");
            break;

        case IDLE:
            printf("System is on\n");
            break;

        default:
            printf("Unknown state\n");
    }

    return 0;
}
