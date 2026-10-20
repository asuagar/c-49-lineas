/*
 * regiones
 *
 * Cuando un programa en C se ejecuta, existe una organización
 * de la memoria en regiones. Cada una tiene una responsabilidad 
 * concreta. Entender este modelo permite razonar cuánto duran los 
 * datos y quién los gestiona.
 *
 * La memoria de un proceso puede visualizarse así:
 *
 *        +-----------------------+
 *        |       Stack           |  ← variables locales, llamadas
 *        |   (crece hacia abajo) |
 *        +-----------------------+
 *        |        Heap           |  ← memoria dinámica (malloc/free)
 *        |   (crece hacia arriba)|
 *        +-----------------------+
 *        |        Data           |  ← globales y estáticas
 *        +-----------------------+
 *        |      Text segment     |  ← código del programa
 *        +-----------------------+
 *
 * Las regiones inferiores del espacio de memoria agrupan los elementos
 * que existen durante toda la ejecución del programa. A diferencia del
 * stack o el heap, su contenido no depende del flujo de llamadas ni de
 * decisiones dinámicas: se define antes de entrar en main y permanece
 * estable hasta el final.
 *
 */

#include <stdio.h>

int ctrl_state = 1;                 /* variable global: zona de datos*/

void print_local_state(void)
{
	int loc_state = 2;              /* variable local: stack */

	printf("Local state: %d\n", loc_state);
}

int main(void)
{
	print_local_state();
	printf("Controller state: %d\n", ctrl_state);

	return 0;
}