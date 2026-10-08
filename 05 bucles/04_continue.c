/*
 * continue
 *
 * La sentencia continue no termina el bucle. En lugar de eso, interrumpe
 * la iteración actual y pasa directamente a la siguiente iteración.
 *
 * En un for, esto implica ejecutar la parte de actualización (i++) y volver
 * a evaluar la condición. En un while, se vuelve directamente a evaluar
 * la condición. 
 * 
 */

#include <stdio.h>

int main()
{
    int sample;

    for (sample = -2; sample <= 2; sample++) {

        /* salta esta iteración cuando sample es < 0*/
        if (sample < 0) {
            continue;
        }

        printf("Valid sensor sample: %d\n", sample);
    }

    return 0;
}