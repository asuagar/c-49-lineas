/*
 * macros
 *
 * Una macro es una sustitución textual definida con #define. El
 * preprocesador reemplaza cada aparición del nombre por su contenido
 * antes de que el código sea compilado.
 *
 * Este mecanismo se usa con frecuencia para definir constantes
 * simbólicas. A diferencia de una variable, no ocupa memoria ni tiene
 * tipo: es simplemente texto que se expande.
 *
 * También es posible eliminar una macro con #undef. A partir de ese
 * punto, el nombre deja de estar definido.
 * 
 */

#include <stdio.h>

#define PI 3.14159
#define MAX 100

int main(void)
{
    printf("PI = %f\n", PI);
    printf("MAX = %d\n", MAX);

    /* eliminar definición */
    #undef MAX

    /* a partir de aquí, MAX ya no está disponible */
    /* printf("%d\n", MAX); */  /* produciría error de compilación */

    return 0;
}