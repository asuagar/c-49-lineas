/*
 * operadores incremento y decremento
 *
 * Los operadores ++ y -- incrementan o decrementan una variable en una unidad.
 * Pueden usarse en forma prefija o postfija, lo que cambia el momento
 * en que se aplica la operación dentro de la expresión.
 * 
 */

#include <stdio.h>

int main()
{
    int x = 5, y;

    /* forma postfija: primero se usa el valor actual y después se incrementa */
    y = x++;
    printf("%d %d\n", x, y);  /* x = 6, y = 5 */

    x = 5;

    /* forma prefija: primero se incrementa y después se usa el valor */
    y = ++x;
    printf("%d %d\n", x, y);  /* x = 6, y = 6 */

    /* el mismo comportamiento se aplica al operador -- */

    return 0;
}