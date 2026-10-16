/*
 * Puntero Genérico
 *
 * Además de los punteros básicos, C permite trabajar con formas más
 * generales y flexibles. Un caso importante es el puntero genérico
 * (void *), que puede almacenar la dirección de cualquier tipo.
 *
 * Sin embargo, un void * no puede desreferenciarse directamente porque
 * no tiene tipo asociado. Es necesario convertirlo al tipo adecuado
 * antes de acceder al valor.
 *
 * Este mecanismo se utiliza cuando se trabaja con funciones genéricas
 * o estructuras que deben manejar distintos tipos de datos.
 */

#include <stdio.h>

int main(void)
{
    int x = 10;
    double y = 3.14;

    void *p;

    /* p apunta a un int */
    p = &x;
    printf("x=%d\n", *(int *)p);

    /* p apunta a un double */
    p = &y;
    printf("y=%.2f\n", *(double *)p);

    return 0;
}
