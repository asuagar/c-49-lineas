/*
 * puntero colgente
 *
 * La memoria reservada dinámicamente debe liberarse con free() cuando
 * deja de ser necesaria. No hacerlo provoca fugas de memoria.
 *
 * Tras liberar un bloque, el puntero pasa a ser colgante (dangling) y no
 * debe usarse. Acceder a él puede provocar comportamiento indefinido,
 * incluyendo fallos de segmentación.
 *
 * Es una buena práctica asignar NULL tras free() para evitar reutilizar
 * accidentalmente el puntero.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = malloc(3 * sizeof(int));
    if (p == NULL) {
        return 1;
    }

    p[0] = 1;
    p[1] = 2;
    p[2] = 3;

    free(p);      

    /* produce error al haberse liberado la memoria
     * printf("%d", p[0]);
     */

    p = NULL;  /* evita puntero colgante */

    return 0;
}
