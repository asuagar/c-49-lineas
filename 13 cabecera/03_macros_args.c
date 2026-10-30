/*
 * macros con argumentos
 *
 * El preprocesador permite definir macros con parámetros. Estas macros
 * se comportan como plantillas: reciben argumentos y generan texto que
 * se inserta directamente en el código antes de compilar.
 *
 * A diferencia de una función, no hay comprobación de tipos ni evaluación
 * controlada. La sustitución es puramente textual, lo que puede dar lugar
 * a resultados inesperados si no se usan paréntesis correctamente.
 * Por esta razón, es habitual envolver los argumentos y la expresión
 * completa entre paréntesis.
 * 
 */

#include <stdio.h>

/* macro con parámetros (forma segura con paréntesis) */
#define SQUARE(x) ((x) * (x))

int main(void)
{
    int a = 3;
    int b = 1 + 2;

    /* expansión textual: ((3) * (3)) */
    printf("%d\n", SQUARE(a)); /* 9 */

    /* expansión textual: ((1 + 2) * (1 + 2)) */
    printf("%d\n", SQUARE(b)); /* 9 */

    return 0;
}