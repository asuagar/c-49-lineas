/*
 * memory leak
 *
 * Una fuga de memoria (memory leak) ocurre cuando un programa reserva
 * memoria en el heap (por ejemplo, con malloc() o calloc()) y pierde la
 * referencia a ese bloque sin liberarlo con free(). Esa memoria sigue
 * ocupada, pero ya no puede reutilizarse porque el programa no conserva 
 * ningún puntero válido hacia ella.
 *
 * El efecto no suele ser inmediato. Sin embargo, si este patrón se repite,
 * el consumo de memoria crece progresivamente hasta degradar el rendimiento
 * o provocar fallos por falta de memoria.
 *
 * Este problema es especialmente crítico en programas de larga duración
 * (servidores, sistemas embebidos, procesos en segundo plano).
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* reservar memoria para leer el valor del sensor */
    int *reading = malloc(sizeof(*reading));
    if (reading == NULL) {
        return 1;
    }

    /* leer y liberar memoria */
    *reading = 42;
    printf("Sensor reading: %d\n", *reading);

    /* se pierde la referencia sin liberar memoria
     * no se devuelve la memoria al gestor para
     * que pueda volver a reutilizarla
     */

    reading = NULL;
    free(reading);

    return 0;
}

