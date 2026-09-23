/*
 * inicialización
 *
 * Inicializar una variable significa asignarle un valor. Se puede hacer
 * cuando se declara o después. Esto evita trabajar con valores indefinidos
 * y hace el código más claro.
 *
 * En las primeras versiones de C, la declaración y la inicialización 
 * estaban separadas. Esto hace el código más depurable, a cambio de aumentar 
 * las líneas de  un programa. Se recomienda realizar
 * la declaración e inicialización en la misma línea. De esta forma, no hace
 * falta volver al comienzo del programa para recordar el tipo de variable.
 *
 */

#include <stdio.h>

int main()
{
    int amps = 10;                  /* declaración + inicialización */
    int volts = 20, ohms = 30;      /* inicialización múltiple del mismo tipo */

    float voltage = 3.14f;          /* tipo float */
    char control_mode  = 'A';       /* tipo char */

    /* \n es una secuencia de escape que representa un salto de línea */
    printf("amps=%d volts=%d ohms=%d\n", amps, volts, ohms);

    /* %.2f muestra un float con 2 decimales
     * %c muestra un carácter */
    printf("voltage=%.2f control_mode=%c\n", voltage, control_mode);

    return 0;
}