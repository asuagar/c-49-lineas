/*
 * switch
 *
 * La sentencia switch permite seleccionar un camino de ejecución en
 * función del valor de una variable. Ese valor se compara con
 * distintos valores definidas en los case.
 *
 * Cada case está ligado a un bloque. Se ejecuta todo el bloque
 * de forma secuencial hasta encontrar un break o hasta el final 
 * del bloque switch.
 *
 * Si no se usa break, la ejecución continúa en el siguiente case. Este
 * comportamiento se llama "fall-through" y, aunque puede ser útil,
 * también es una fuente frecuente de errores.
 *
 */

#include <stdio.h>

#include <stdio.h>

int main(void)
{
    int mode = 6;

    switch (mode) {
    case 1:
        printf("Robot in automatic operation\n");
        break;

    /* Fall-trhough intencionado */
    case 6:
    case 7:
        printf("Robot stopped for maintenance\n");
        break;

    default:
        printf("Unknown robot mode\n");
        break;
    }

    return 0;
}