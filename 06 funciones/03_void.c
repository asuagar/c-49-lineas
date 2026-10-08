/*
 * void
 *
 * En C, el tipo void se utiliza para indicar "ausencia de valor".
 * Aparece en dos contextos habituales en funciones.
 *
 * Cuando una función devuelve void, significa que no produce ningún
 * resultado. Se ejecuta por su efecto (por ejemplo, imprimir en pantalla),
 * no para devolver un valor.
 *
 * Cuando una función tiene (void) en la lista de parámetros, indica que
 * no recibe ningún argumento. Es una forma explícita de decir que la
 * función no espera datos de entrada. 
 * 
 * Es habitual ver la función main escrita como "int main()" en lugar de
 * "int main(void)". En C, ambas formas son aceptadas por muchos compiladores,
 * pero no son equivalentes desde el punto de vista del lenguaje: "main()"
 * no especifica claramente los parámetros.* 
 * 
 */

#include <stdio.h>

/* no devuelve valor */
void saludar(void)
{
    printf("Hola\n");
}

/* devuelve valor */
int obtener_valor(void)
{
    return 10;
}

int main(void)
{
    saludar();  /* llamada sin resultado */

    int x = obtener_valor();  /* llamada con resultado */
    printf("x=%d\n", x);

    return 0;
}