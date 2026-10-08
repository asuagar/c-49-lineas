/*
 * partes
 *
 * Para usar funciones con soltura, conviene entender bien su estructura.
 * Cada función en C se compone de cuatro elementos claros.
 *
 * (1) El tipo de retorno indica qué valor produce la función. (2) El nombre 
 * es cómo la identificamos al llamarla. (3) Los parámetros definen los 
 * datos de entrada. (4) Finalmente, el cuerpo contiene las instrucciones 
 * que implementan la tarea.
 *
 */

#include <stdio.h>

/* tipo nombre(parámetros) */
int suma(int a, int b)
{
    int resultado = a + b;

    return resultado;  /* valor que devuelve la función */
}

int main(void)
{
    int r = suma(3, 4);  /* llamada a la función */

    printf("r=%d\n", r);

    return 0;
}