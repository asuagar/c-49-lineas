/*
 * tipos básicos
 *
 * En C trabajamos con un conjunto reducido de tipos básicos que nos
 * permiten representar la mayoría de los datos. Los más habituales
 * son los enteros (int), los números con decimales (float y double) 
 * y los caracteres (char).
 *
 * Cada uno de estos tipos se almacena de forma distinta en memoria.
 * double ofrece al menos la precisión exigida para float, aunque no
 * se garantiza que ocupe más bytes en todas las implementaciones.
 *
 * El tamaño exacto puede variar según el sistema, por lo que no se
 * debe asumir un valor fijo. Para conocer cuánto ocupa cada tipo, C
 * proporciona el operador sizeof.

 * El tipo no solo define el tamaño, sino también las operaciones que
 * se pueden realizar.
 */

#include <stdio.h>

int main(void)
{
    int ticks = 10;
    float current = 3.14f;
    double position = 2.718281828;
    char status = 'R';

    printf("Ticks=%d Current=%.2f Position=%.3f Status=%c\n",
           ticks, current, position, status);

    printf("Sizes: int=%zu float=%zu double=%zu char=%zu\n",
           sizeof(ticks), sizeof(current), sizeof(position),
           sizeof(status) );
    return 0;
}
