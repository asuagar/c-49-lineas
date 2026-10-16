/*
 * paso por referencia
 *
 * En C, los argumentos se pasan por valor: la función recibe una copia
 * del dato original. Cualquier modificación afecta solo a esa copia.
 * Se consume memoria extra al hacer copias y no actuar sobre
 * el dato original.
 *
 * Para modificar el dato original, se debe pasar su dirección
 * mediante un puntero. De este modo, la función puede acceder al dato
 * directo en memoria. Además, evita el gasto de memoria de copiar datos.
 *
 */

#include <stdio.h>

void incvalue(int x);

void incptr(int *p);

int main(void)
{
    int cycles = 5;

    incvalue(cycles);
    printf("After incvalue: %d\n", cycles);

    incptr(&cycles);
    printf("After incptr: %d\n", cycles);

    return 0;
}

/* El argumento se pasa por valor. */
void incvalue(int x)
{
    x = x + 1;
}

/* El puntero permite modificar el objeto original. */
void incptr(int *p)
{
    *p = *p + 1;
}
