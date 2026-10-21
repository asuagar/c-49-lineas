/*
 * malloc, calloc, realloc y free
 *
 * El heap permite reservar memoria cuyo tamaño se decide al ejecutar:
 *
 * - malloc(bytes) reserva un bloque sin inicializar 
 * - calloc(n, tamaño) reserva n elementos y pone sus
 * - realloc(p, bytes) cambia el tamaño y conserva los datos hasta el menor
 *                     de ambos tamaños. La parte añadida no se inicia.
 *
 * Si la reserva de memoria falla, las funciones devuelven NULL.
 * Estas operaciones pueden introducir tiempos variables. Por ello, se
 * desaconseja su uso en tiempo real duro, salvo en el inicio del programa.
 *
 * free(p) libera el bloque. No liberarlo causa fugas y acceder después
 * de liberarlo es comportamiento indefinido. No debe liberarse dos veces.
 *
 */

#include <stdio.h>   /* printf */
#include <stdlib.h>  /* malloc, calloc, realloc, free, NULL */

int main(void)
{
    int *p = malloc(2 * sizeof(int));
    if (p == NULL) {
        return 1;
    }
    p[0] = 10;
    printf("malloc: %d %d\n", p[0], p[1]);
    free(p);

    p = calloc(2, sizeof(*p));
    if (p == NULL) {
        return 1;
    }
    p[0] = 10;
    printf("calloc: %d %d\n", p[0], p[1]); 

    int *t = realloc(p, 3 * sizeof(int));  /* ampliar a 3 elementos */
    if (t== NULL) {
        return 1;
    }
    t[2] = 30;  /* inicializar el elemento nuevo antes de leerlo */
    printf("realloc: %d %d %d\n", p[0], p[1], t[2]);
    free(t);

    return 0;
}
