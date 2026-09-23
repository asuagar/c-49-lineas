/*
 * booleanos
 *
 * En C, los valores lógicos representan situaciones que pueden ser
 * verdaderas o falsas. Aunque tradicionalmente se usaban enteros
 * (0 para falso y distinto de 0 para verdadero), el estándar C99
 * introdujo el tipo bool para trabajar de forma más clara.
 *
 * Este tipo se define en la cabecera <stdbool.h>, que forma parte
 * del estándar C99. Internamente, bool es un alias del tipo _Bool, 
 * y los valores true y false se representan como 1 y 0.
 *
 * El uso de bool no cambia el funcionamiento del lenguaje, pero mejora
 * la legibilidad y hace explícita la intención lógica del programa.
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool emergency = true;
    bool ready = (10 > 5);            /* resultado de una comparación */

    printf("activo=%d mayor=%d\n", emergency, ready);

    return 0;
}