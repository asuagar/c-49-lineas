/*
 * declaración
 *
 * Antes de usar una variable en C, es necesario declararla. Declarar una
 * variable significa indicar su tipo y su nombre para que el compilador
 * reserve espacio en memoria.  
 *
 * En esta fase no es obligatorio asignar un valor. La variable existe,
 * pero su contenido es el previamente almacenado. Puesto que no es un valor
 * deseable, se dice que contiene un valor indeterminado y leerlo 
 * puede provocar un comportamiento indefinido.
 *
 */

#include <stdio.h>

int main()
{
    int rpm;                        /* declaración simple */
    int lticks, rticks;             /* declaración múltiple del mismo tipo */

    rpm = 1200;
    lticks = 20;
    rticks = 22;

    printf("Target: %d rpm\n", rpm);
    printf("Ticks: %d left, %d right\n", lticks, rticks);
    return 0;
}

