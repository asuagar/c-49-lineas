/*
 * volatile
 *
 * La palabra clave volatile se diseñó para impedir optimizaciones del
 * compilador que podrían hacer incorrecto un programa cuando existen
 * eventos asíncronos.
 *
 * Al declarar una variable como volatile, el compilador no puede conservar
 * una copia y reutilizarla indefinidamente: debe tratar sus lecturas y
 * escrituras como accesos observables. El valor puede cambiar fuera del
 * flujo normal del programa por acción de un periférico, una interrupción,
 * otro hilo o un manejador de señales.
 *
 */

#include <stdio.h>

volatile int sensor_ready = 0;

int main(void)
{
	int polls = 0U;

	while (!sensor_ready) {
		++polls;
		if (polls == 3U) {
			/* Simula el cambio producido por hardware o una interrupción. */
			sensor_ready = 1;
		}
	}

	printf("sensor listo tras %u sondeos\n", polls);
	return 0;
}
