/*
 * operador ternario
 *
 * El operador ternario permite tomar una decisión en una sola expresión.
 * Su forma es:
 *
 *     condición ? valor_si_verdadero : valor_si_falso
 *
 * Primero se evalúa la condición. Si es verdadera, la expresión toma
 * el primer valor; en caso contrario, toma el segundo. Este operador 
 * es equivalente a un if-else simple, pero se utiliza cuando queremos 
 * escribir código más compacta.
 */

#include <stdio.h>

int main()
{
    int left = 40;
    int right = 55;
    int safe = (left < right) ? left : right;

    printf("Safe speed: %d\n", safe);
    return 0;
}