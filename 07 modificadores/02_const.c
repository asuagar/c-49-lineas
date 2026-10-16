/*
 * const
 * 
 * const impide modificar el objeto. Es habitual usarlo para parámetros 
 * de solo lectura, límites de configuración, valores de calibración y 
 * datos que no deben cambiarse por accidente. Así, la intención queda 
 * visible y el compilador puede avisar.  En sistemas embebidos y control 
 * ayuda a proteger configuraciones de solo lectura.
 * 
 */

 #include <stdio.h>

int main(void)
{
    const int max_speed = 1800;             /* límite de configuración */
    const float supply_voltage = 24.0f;     /* valor de calibración */

    printf("Maximum speed: %d rpm\n", max_speed);
    printf("Supply voltage: %.1f V\n", supply_voltage);

    /* Error intencionado: la asignación directa no compila. */
    // supply_voltage = 12.0f;

    return 0;
}