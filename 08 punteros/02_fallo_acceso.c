/*
 * fallo de acceso
 *
 * No todos los punteros apuntan a una dirección válida. En la práctica,
 * es importante distinguir entre punteros seguros y punteros que pueden
 * provocar errores graves durante la ejecución.
 *
 * Un puntero no inicializado (wild pointer) contiene un valor indeterminado.
 * Si se desreferencia, el programa intentará acceder a una dirección
 * impredecible y el comportamiento será indefinido.
 *
 * Un puntero colgante (dangling pointer) apunta a memoria que ya no es
 * válida, por ejemplo porque la variable a la que apuntaba ha dejado
 * de existir. Este espacio de memoria podría ser usado por otras variables.
 *
 * Un puntero NULL no apunta a ninguna dirección válida. Se usa para
 * expresar de forma explícita que no hay dato.
 *
 * Si el programa intenta desreferenciar un puntero inválido, se produce 
 * un fallo de acceso (segmentation fault). Este error aparece cuando 
 * se accede a una zona de memoria no permitida por el sistema operativo.
 * 
 */

#include <stdio.h>

int main(void)
{
    int *nil = NULL; /* puntero nulo. */
    int *uninit;     /* puntero sin inicializar. */
    int *dang;

    {
        int x = 20;
        dang = &x;
    } /* x deja de existir; dang queda colgante. */
    int x = 30;

    /* puntero nulo: segmentation fault */
    // printf("*nil = %d\n", *nil);      
    
    /* puntero colgante a variable extinta*/
    printf("*dang = %d\n", *dang);       

    /* puntero no inicializado: valor impredecible */
    printf("*uninit = %d\n", *uninit);   

    return 0;
}