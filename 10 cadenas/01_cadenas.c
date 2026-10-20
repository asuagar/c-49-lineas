/*
 * cadenas
 *
 * En C no existe un tipo "string" como tal. En su lugar, una cadena de
 * caracteres se representa como un array de char terminado en '\0'.
 * Este carácter especial marca el final de la cadena. Sin él, el programa
 * no puede saber dónde termina el texto. Por tanto, un string en C no es 
 * solo una secuencia de caracteres, sino una secuencia de caracteres 
 * seguida de un terminador.
 *
 * El formato "%s" imprime la cadena completa hasta '\0', mientras que
 * "%c" imprime un único carácter.
 *
 */

#include <stdio.h>

int main(void)
{
    char arr[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char str[] = "hello";  /* el compilador añade '\0' automáticamente */

    /* %s imprime hasta encontrar '\0' */
    printf("%s\n", arr);
    printf("%s\n", str);

    /* %c imprime caracter individual */
    printf("%c %c\n", arr[1], str[1]);

    return 0;
}