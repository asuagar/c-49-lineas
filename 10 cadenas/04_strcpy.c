/*
 * strcpy
 *
 * La función strcpy() copia un string origen en un destino. Se encuentra
 * en <string.h> y copia carácter a carácter hasta '\0', incluido.
 * Su uso es sencillo, pero exige cuidado: el destino debe apuntar a una
 * zona de memoria válida y con tamaño suficiente. De lo contrario, se
 * incurre en comportamiento indefinido.
 *
 * La otra forma sería copiar elemento a elemento,  sin olvidarse de 
 * copiar el '\0'. Para eso, el bucle debe realizarse hasta el
 * tamaño N+1 donde N es el número de letras del string.
 *
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[] = "hello";

    /* uso correcto */
    char dst[6];  /* espacio suficiente (incluye '\0') */
    strcpy(dst, src);
    printf("%s\n", dst);

    /* ERROR: tamaño buffer insuficiente */
    // char small[3];
    // strcpy(small, src);

    return 0;
}