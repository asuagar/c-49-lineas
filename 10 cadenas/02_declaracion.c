/*
 * declaración
 *
 * Una cadena puede declararse como un array de caracteres o como un
 * puntero a una cadena. En un array, el nombre de la variable 
 * actúa como la dirección de su primer elemento. De forma similar, 
 * un puntero a cadena almacena la dirección del primer carácter de 
 * la secuencia.
 *
 * En ambos casos, el acceso mediante índices funciona porque a[i]
 * equivale a *(a + i): se basa en aritmética de punteros. Sin embargo,
 * hay una diferencia importante: un array como char mode[] = "AUTO"
 * reserva almacenamiento propio y sus caracteres pueden modificarse.
 *
 * Un puntero como char *mode = "AUTO" apunta a un literal de
 * cadena, que no debe modificarse. Intentar escribir en él tiene
 * comportamiento indefinido y, en muchos sistemas, provoca un fallo
 * de segmentación.
 *
 * Nota: Un literal es un valor escrito directamente en el código fuente. 
 * No se calcula ni se obtiene de una variable: aparece tal cual en 
 * el programa.
 *
 */

#include <stdio.h>

int main(void)
{
    char str[] = "hello";   /* modificable */
    char *p = "world";      /* memoria solo lectura */

    /* modificación solo en el array */
    str[0] = 'H';
    printf("%s\n", str);

    /* segmentation fault */
    // p[0] = 'W'; 

    return 0;
}