/*
 * composición
 *
 * Una union puede formar parte de estructuras más complejas. Es habitual
 * encontrarla anidada dentro de una struct para representar datos que
 * pueden adoptar varias formas.
 *
 * Estas variantes aparecen en código de sistemas, protocolos y drivers,
 * donde un mismo bloque de memoria puede interpretarse de distintas formas.
 * 
 */

#include <stdio.h>

/* union anidada dentro de una struct */
struct data {
    int type;
    union {
        int i;
        float f;
    } value;
};

int main(void)
{
    struct data d;

    d.type = 0;
    d.value.i = 10;
    printf("int=%d\n", d.value.i);

    d.type = 1;
    d.value.f = 2.5f;
    printf("float=%.2f\n", d.value.f);

    return 0;
}