/*
 * hilos
 *
 * Un hilo (thread) es una secuencia de ejecución dentro de un proceso.
 * Todos los hilos comparten memoria y recursos, pero cada uno mantiene
 * su propio flujo de ejecución. Esto permite ejecutar varias tareas de
 * forma concurrente dentro del mismo programa.
 *
 * Esta capacidad permite dividir el trabajo en varias tareas: realizar
 * cálculos en paralelo, mantener interfaces responsivas, gestionar
 * múltiples eventos o conexiones, etc
 *
 * Todo programa en C comienza su ejecución en la función main(), que se
 * ejecuta dentro de un hilo principal (main thread). Este hilo constituye
 * el flujo inicial del programa.
 *
 */

#include <stdio.h>

int main(void)
{
    printf("main thread running\n");

    /* desde aquí se pueden crear nuevos hilos */

    return 0;
}