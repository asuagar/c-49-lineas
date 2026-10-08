/*
 * definición de función
 *
 * A medida que los programas crecen, repetir el mismo código varias veces
 * hace que sean más difíciles de leer y mantener. Para evitarlo, C permite
 * definir funciones.
 *
 * Una función es un bloque de código con un nombre que realiza una tarea
 * concreta. En lugar de escribir ese código repetidamente, podemos llamarla
 * tantas veces como necesitemos.
 *
 * Cada función puede recibir datos de entrada (parámetros) y devolver un
 * resultado. De este modo, el programa se organiza en partes pequeñas y
 * manejables.
 * 
 */

#include <stdio.h>

/* definición de una función simple */
int cuadrado(int x)
{
    return x * x;
}

int main(void)
{
    int a = 4;

    /* llamada a la función */
    int resultado = cuadrado(a);

    printf("resultado=%d\n", resultado);

    return 0;
}

