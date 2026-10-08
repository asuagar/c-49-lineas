/*
 * break
 *
 * La sentencia break termina inmediatamente el bucle o el switch más
 * interno. En ese momento, se abandona el bloque y la ejecución continúa
 * justo después.
 *
 * En los bucles, break se utiliza para salir de forma anticipada del bucle
 * cuando se cumple una condición dentro del propio bloque.
 *
 */

#include <stdio.h>

int main()
{
    int dist = 50;

    while (dist > 0) {
        if (dist <= 10) {
            /* salida anticipada */
            break;
        }

        printf("Distance: %d mm\n", dist);
        dist -= 10;
    }

    printf("Stop distance: %d mm\n", dist);

    return 0;
}