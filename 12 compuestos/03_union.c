/*
 * unions
 *
 * Una union permite almacenar distintos tipos de datos en la misma
 * ubicación de memoria. A diferencia de una struct, donde cada campo
 * tiene su propio espacio, en una union todos los miembros comparten
 * la misma dirección.
 *
 * Esto implica que solo un miembro es válido en cada momento. Al escribir
 * en un campo, se sobrescribe el contenido anterior interpretado como
 * otro tipo.
 *
 * Las union se usan cuando un dato puede representarse de varias formas,
 * pero nunca de manera simultánea.
 * 
 */

#include <stdio.h>

union data {
    int i;
    float f;
};

int main(void)
{
    union data d;

    d.i = 10;
    printf("i=%d\n", d.i);

    d.f = 3.14f;  /* sobrescribe el mismo espacio */
    printf("f=%.2f\n", d.f);

    /* el valor anterior de i ya no es válido */
    printf("i (reinterpretado)=%d\n", d.i);

    return 0;
}