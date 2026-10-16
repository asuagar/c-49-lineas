/*
 * punteros
 *
 * Un puntero es una variable que almacena una dirección de memoria.
 * Su declaración indica el tipo de dato al que puede apuntar. Por
 * ejemplo, int *p declara p como un puntero a  un int. O dicho de
 * otro modo, el valor almacenado *p será de tipo int.
 *
 * Para inicializar un puntero con la dirección de una variable se usa
 * el operador dirección (&): p = &x. La expresión &x obtiene la
 * dirección de x. También puede aplicarse a una variable puntero:
 * &p es la dirección del puntero p.
 *
 * Una vez inicializado, *p accede al valor apuntado. En una expresión,
 * el * es el operador de desreferencia y solo puede aplicarse a punteros:
 * permite leer o modificar el objeto al que apuntan. 
 *
 */

#include <stdio.h>

int main(void)
{
    int x = 10;
    int *p;         /* declaración: el valor del puntero será de tipo int */
    p = &x;         /* inicialización: & apunta a una dirección */

    /* impresión direcciones memoria */
    printf("x = %p\n", &x); 
    printf("*p = %p\n", p);

    /* modificación valor mediante puntero */
    *p = 20;       
    printf("modified x = %d\n", x);
    printf("*p = %d\n", *p);

    return 0;
}