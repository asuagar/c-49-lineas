/*
 * palabras reservadas (keywords)
 *
 * En C existen palabras que tienen un significado especial 
 * para el compilador. Estas palabras se llaman "keywords" y forman parte
 * de la sintaxis del lenguaje. No se pueden usar para otros fines, salvo 
 * su definición original.
 *
 * Estas palabras no se pueden usar como nombres de variables o funciones.
 * Al intentar hacerlo, el compilador generará un error.
 * El lenguaje C define un conjunto cerrado de estas palabras (32 en C clásico),
 * que cubren tipos de datos, control de flujo y estructura del programa.
 * Constituyen el "vocabulario básico"  con el que se construyen todos 
 * los programas en C.
 * 
 * El listado de palabras reservadas en C es el siguiente:
 * 
 * auto, break, case, char, const, continue, default, do, double, else,
 * enum, extern, float, for, goto, if, inline, int, long, register,
 * restrict, return, short, signed, sizeof, static, struct, switch,
 * typedef, union, unsigned, void, volatile, while
 * 
 */

#include <stdio.h>

int main()
{
    int speed = 10;         /* 'int' es una keyword */

    if (speed > 0) {        /* 'if' es una keyword */
        printf("Valor positivo\n");
    }

    /* Ejemplos de uso incorrecto */
    /* int if = 5; */      /* error: 'if' es palabra reservada */
    /* int return = 0; */  /* error: 'return' es palabra reservada */

    return 0;         /* 'return' es una keyword */

}
