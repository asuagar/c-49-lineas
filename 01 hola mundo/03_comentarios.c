/*
 * comentarios
 *
 * Los comentarios explican el código y ayudan a su comprensión.
 * El compilador ignora todo lo que está entre slash-asterisco y asterisco-slash.
 * Para comentarios de una línea, también se puede usar slash-slash
 *
 */

#include <stdio.h>

// punto de entrada del programa 
int main()
{
    int x;  // comentario corto al final de la línea 

    /* comentario en varias líneas
     * se usa para explicar una idea más larga
     */

    x = 5;  /* los comentarios no afectan a la ejecución del programa */

    /* x = 10; */  /* esta línea no se ejecutará al estar comentada */

    printf("%d\n", x);

    return 0;
}