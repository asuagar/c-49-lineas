/*
 * for
 *
 * El bucle for se utiliza cuando conocemos de antemano cuántas veces
 * queremos repetir una acción. Integra en una sola línea la inicialización,
 * la condición y la actualización.
 *
 * Su forma general es:
 * 
 *     for (inicialización; condición; actualización)
 *
 */

#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 4; i++) {
        int sample = 20 + i;

        printf("Cycle %d: sensor=%d\n", i, sample);
    }

    return 0;
}