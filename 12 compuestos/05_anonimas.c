/*
 * struct y union anónimas
 *
 * La struct anónima no tiene una etiqueta que permita reutilizarla.
 * La declaración crea una única variable. Se puede usar. Sin embargo,
 * no se puede declarar otra variable igual. También se puede hacer
 * con las unions.
 *
 * La struct conserva todos sus miembros. La union comparte almacenamiento:
 * después de escribir un miembro, solo debe leerse ese miembro.
 *
 */

#include <stdio.h>

int main(void)
{
    struct {
        int pos;
        int speed;
    } axis;

    union {
        int dist;
        float temp;
    } reading;

    axis.pos = 250;
    axis.speed = 80;
    printf("Position: %d mm\n", axis.pos);
    printf("Speed: %d mm/s\n", axis.speed);

    /* error: axis es el nombre del objeto, no una etiqueta */
    // struct axis ax1; 

    reading.dist = 120;
    printf("Distance: %d mm\n", reading.dist);

    reading.temp = 24.5f; /* reemplaza el valor de dist */
    printf("Temperature: %.1f C\n", reading.temp);

    return 0;
}
