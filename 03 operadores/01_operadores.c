/*
 * operadores
 *
 * En C, los operadores son los símbolos que permiten realizar operaciones
 * sobre los datos. Gracias a ellos, se pueden combinar valores y construir
 * expresiones que el programa evaluará durante su ejecución. Cada operador
 * actúa sobre uno o más valores, llamados operandos. Por ejemplo, 
 * en "a + b", el símbolo '+' es el operador y 'a' es un operando.
 *
 * Los operadores más habituales en las primeras etapas son los aritméticos,
 * que permiten realizar cálculos básicos: suma, resta, multiplicación,
 * división y resto. Cuando ambos operandos son enteros, la división descarta
 * la parte decimal.
 * 
 */

#include <stdio.h>

int main()
{
    int rpm = 1200;
    int delta = 30;

    printf("Sum=%d Difference=%d Product=%d\n",
           rpm + delta, 
           rpm - delta,
           rpm * delta);

    printf("Division=%d Remainder=%d\n",
           rpm / delta, 
           rpm % delta);

    return 0;
}
