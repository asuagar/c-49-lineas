/*
 * operadores relacionales y lógicos
 *
 * En C, los operadores relacionales permiten comparar valores, mientras
 * que los operadores lógicos permiten combinar esas comparaciones.
 *
 * Los operadores relacionales (>, <, >=, <=, ==, !=) evalúan relaciones
 * entre dos valores y producen un resultado booleano: 1 (verdadero) o
 * 0 (falso).
 *
 * A partir de estos resultados, los operadores lógicos (&&, ||, !) permiten
 * construir condiciones más complejas. Por ejemplo, podemos comprobar si
 * un valor está dentro de un rango combinando varias comparaciones.
 *
 * Este tipo de expresiones es fundamental en estructuras de control como if.
 * 
 */

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 5;

    /* Operadores relacionales */
    printf("a > b = %d\n", a > b);
    printf("a == b = %d\n", a == b);

    /* Operadores lógicos */
    int x = (a > 0) && (b > 0); /* ambas condiciones verdaderas */
    int y = (a < 0) || (b > 0); /* al menos una verdadera */
    int z = !(a == b);          /* negación */

    printf("x=%d y=%d z=%d\n", x, y, z);

    return 0;
}