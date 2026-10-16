/*
 * puntero a puntero
 *
 * En algunos casos no basta con acceder a un dato, sino que necesitamos
 * modificar o gestionar la propia dirección almacenada en un puntero.
 * Para ello, C permite usar punteros a punteros.
 *
 * Este mecanismo aparece en situaciones como el paso de punteros a funciones,
 * la gestión de memoria o el manejo de estructuras más complejas.
 */

#include <stdio.h>

int main(void)
{
    int x = 5;
    int *p = &x;     /* p apunta a x */
    int **pp = &p;   /* pp apunta a p */

    printf("x = %d\n", x);
    printf("*p = %d\n", *p);      /* valor de x via p*/
    printf("**pp = %d\n", **pp);  /* valor de x via pp*/

    /* modificación a través de doble puntero */
    **pp = 10;
    printf("x modificado=%d\n", x);

    return 0;
}
