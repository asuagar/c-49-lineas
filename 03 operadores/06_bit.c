/*
 * operadores bit
 *
 * En C existen operadores a nivel de bit que trabajan directamente
 * sobre la representación binaria de los datos. Estos operadores son
 * habituales en sistemas embebidos, donde es necesario manipular
 * registros, máscaras o flags individuales.
 *
 * Cada bit de un número se puede activar (1) o desactivar (0), y los
 * operadores bit a bit permiten combinar, invertir o desplazar esos bits.
 * Para entender los resultados, es útil pensar en la representación binaria.
 * 
 */

#include <stdio.h>

int main()
{
    /* a = 5  -> 00000101 (8 bits) */
    /* b = 9  -> 00001001 (8 bits) */
    unsigned int a = 5, b = 9;

    /* AND: solo bits comunes a 1 */
    printf("a & b = %u\n", a & b);   /* 00000001 -> 1 */

    /* OR: bits a 1 en cualquiera */
    printf("a | b = %u\n", a | b);   /* 00001101 -> 13 */

    /* XOR: bits distintos */
    printf("a ^ b = %u\n", a ^ b);   /* 00001100 -> 12 */

    /* NOT: invierte todos los bits */
    printf("~a = %u\n", ~a);         /* depende del tamaño (ej. 32 bits) */

    /* Desplazamiento a la izquierda: multiplica por 2 */
    printf("b << 1 = %u\n", b << 1); /* 00010010 -> 18 */

    /* Desplazamiento a la derecha: divide por 2 (entero) */
    printf("b >> 1 = %u\n", b >> 1); /* 00000100 -> 4 */

    return 0;
}