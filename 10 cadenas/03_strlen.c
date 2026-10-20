/*
 * tamaño
 *
 * Una cadena almacenada en un array puede modificarse carácter a carácter.
 * Esto no cambia su tamaño, solo el contenido dentro del buffer existente.
 * La longitud de la cadena se obtiene con strlen(), función definida en
 * <string.h>. Esta función cuenta los caracteres hasta '\0' (sin incluirlo).
 *
 * Al declarar 'char s[] = "hello"';, el compilador deduce automáticamente
 * el tamaño del array (incluyendo el terminador '\0'). Esto es cómodo y
 * reduce errores en ejemplos simples.
 *
 * Sin embargo, en código real suele ser preferible especificar el tamaño
 * del buffer de forma explícita (por ejemplo, char s[10]) para controlar
 * la memoria disponible y evitar desbordamientos.*
 * 
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[10] = "hello";   /* buffer con espacio extra */
    size_t len = strlen(str); /* size_t es un tipo para almacenar tamaños */

    printf("original: %s (len=%zu)\n", str, len);

    return 0;
}