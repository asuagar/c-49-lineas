/*
 * segmentation fault
 *
 * Un fallo de segmentación (SIGSEGV) aparece cuando el programa intenta
 * leer o escribir en una zona de memoria a la que no tiene acceso.
 * En C, esto ocurre a menudo al desreferenciar un puntero NULL, usar
 * un puntero no inicializado o acceder a memoria ya liberada.
 *
 * Es el caso más habitual en depuración de programas en C. Un ejemplo
 * real muy común es intentar usar *p cuando p vale NULL. El sistema
 * operativo detecta ese acceso ilegal y termina el proceso.
 *
 */

#include <stdio.h>

int main(void)
{
    int *p = NULL;

    printf("%d\n", *p);  /* acceso inválido: suele provocar SIGSEGV */

    return 0;
}