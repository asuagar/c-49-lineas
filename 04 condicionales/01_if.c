/*
 * if
 *
 * Hasta ahora, el programa se ejecutaba de forma secuencial, instrucción
 * tras instrucción. Sin embargo, en muchos casos necesitamos que el
 * programa tome decisiones y ejecute código solo si se cumple una condición.
 *
 * La sentencia if permite evaluar una expresión. Si el resultado es
 * verdadero (distinto de 0), se ejecuta el bloque asociado. En caso
 * contrario, se ignora. Este es el primer mecanismo que rompe la ejecución lineal del programa.
 * 
 */

#include <stdio.h>

int main()
{
    int temp = 42;

    if (temp > 40) {
        printf("Overheat warning\n");
    }

    printf("Temperature: %d degrees\n", temp);
    return 0;
}