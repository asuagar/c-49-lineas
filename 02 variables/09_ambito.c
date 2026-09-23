/*
 * ámbito (scope)
 *
 * El ámbito es la región del programa en la que un identificador puede usarse.
 * Un nombre declarado fuera de una función tiene ámbito de fichero y es visible
 * hasta el final del fichero. Dentro de un bloque tiene ámbito de bloque y es
 * visible hasta su final; el nombre declarado en un for solo vale en esa sentencia.
 *
 * Si un bloque interior declara el mismo nombre que uno exterior, el nombre
 * interior oculta temporalmente al exterior. Son variables distintas; aunque C
 * lo permite, conviene evitarlo si dificulta la lectura o la depuración.
 *
 */

#include <stdio.h>

/* ámbito global */
int limit = 100; 

int main(void)
{
    /* ámbito del bloque de main */
    int speed = 80; 

    printf("global-scope limit: %d\n", limit);
    printf("main-scope speed: %d\n", speed);

    {
        /* oculta speed declarado en main, le hace sombra (shadowing)*/
        int speed = 40; 

        printf("local-scope speed: %d\n", speed);
        printf("global-scope limit: %d\n", limit);
    }

    return 0;
}
