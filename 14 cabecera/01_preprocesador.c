/*
 * preprocesador
 *
 * Antes de que el compilador procese un programa en C, el código pasa
 * por una fase previa llamada preprocesado. En esta etapa no se ejecuta
 * código ni se comprueba su validez semántica; simplemente se aplican
 * transformaciones de texto sobre el fichero fuente. El resultado 
 * es otro fichero fuente reemplazando las constantes definidas
 * en el proprocesador donde sea oportuno.
 *
 * Las directivas del preprocesador comienzan con '#'. Entre las más
 * habituales se encuentran:
 *
 * - #include   → inserta contenido de otros ficheros
 * - #define    → define macros o constantes simbólicas
 * - #if/#ifdef → controla qué partes del código se incluyen
 *
 * El resultado de esta fase es un nuevo código fuente "expandido",
 * que es el que finalmente recibe el compilador.
 * 
 */

#include <stdio.h>

/* constante definida por el preprocesador */
#define MESSAGE "Hello, preprocessor"

int main(void)
{
    /* el texto MESSAGE será sustituido antes de compilar */
    printf("%s\n", MESSAGE);

    return 0;
}