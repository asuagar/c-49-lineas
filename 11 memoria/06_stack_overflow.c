/*
 * stack overflow
 *
 * El stack tiene un tamaño limitado. Cada llamada a función consume
 * memoria para sus variables locales y contexto de ejecución. Si se
 * consume más espacio del disponible, el programa falla: esto se conoce
 * como stack overflow.
 * 
 * Este problema puede aparecer en distintos escenarios: uso de arrays 
 * locales muy grandes, recursión sin una condición de parada adecuada, etc
 * En la recursión, cada llamada añade un nuevo frame al stack. Si no existe
 * un límite claro de parada, el crecimiento es indefinido, el stack se agota.
 *
 * Suele terminar en un segmentation fault, puesto el programa intentará
 * acceder más allá del stack.
 * 
 */

#include <stdio.h>

void recurse(int n)
{
    int local[1000];  /* consume espacio en el stack */
    local[0] = n;

    printf("n=%d\n", n);
    recurse(n + 1);  /* sin condición de parada */
}

int main(void)
{
    recurse(1);
    return 0;
}