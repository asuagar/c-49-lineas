/*
 * prototipado
 *
 * En C, una función puede declararse antes de definirse. Esto permite
 * usarla en el programa antes de que aparezca su implementación.
 *
 * La declaración (o prototipo) informa al compilador sobre el nombre,
 * los parámetros y el tipo de retorno. Más adelante, la definición
 * contiene el código real. Finalmente, la llamada ejecuta la función.
 * Escribir los prototipos mejora la legibilidad del código. Ayudan a
 * hacerse una idea rápida de las funciones que contine un fichero.
 * 
 * La combinación del nombre de la función, sus parámetros y su tipo
 * de retorno define su firma o contrato. Este contrato describe qué
 * espera la función como entrada y qué garantiza como salida. Siempre
 * se debe respetar el contrato de la función cuando se usa.
 * 
 */

#include <stdio.h>

/* declaración (prototipado) */
int doble(int);       /* contrato con nombre parámetros */
int triple(int x);    /* contrato sin nombre parámetros */

int main(void)
{
    printf("d=%d\n", doble(5));
    printf("t=%d\n", triple(5))

    return 0;
}

/* definición */
int doble(int x)
{
    return x * 2;
}

int triple(int x)
{
    return x * 3;
}