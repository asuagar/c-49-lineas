/*
 * while
 *
 * Hasta ahora, el programa ejecutaba cada instrucción una sola vez.
 * Sin embargo, en muchos problemas necesitamos repetir una acción
 * varias veces. Para ello, C proporciona estructuras llamadas bucles.
 *
 * En este primer ejemplo, se muestra el bucle while. Su funcionamiento es
 * sencillo: antes de cada iteración, se evalúa una condición. Si la
 * condición es verdadera, se ejecuta el bloque; si es falsa, el bucle
 * termina.
 *
 * Es importante que dentro del bloque haya algún cambio que afecte a
 * la condición. De lo contrario, el bucle podría ejecutarse indefinidamente.
 * 
 */

#include <stdio.h>

int main()
{
    int cycle = 0;
    int target = 3;

    while (cycle < target) {
        printf("Control cycle: %d\n", cycle);
        /* actualización necesaria para terminar el bucle */
        cycle++;
    }

    return 0;
}