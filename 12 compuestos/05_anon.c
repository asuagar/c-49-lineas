/*
 * struct y union anónimas
 *
 * La struct anónima no tiene una etiqueta que permita reutilizarla.
 * La etiqueta es la palabra antes del bloque. Solamente tiene un alias
 * ubicado al final del nombre. La declaración crea una única variable que
 * se puede usar. Sin embargo, no se puede declarar otra variable igual. 
 * También se puede hacer con las unions.
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
    } axis;           /*'axis' es un alias de ese struct */

    union {
        int dist;
        float temp;
    } reading;        /* 'reading' es un alias de esa union */

    axis.pos = 250;
    axis.speed = 80;
    printf("Position: %d mm\n", axis.pos);
    printf("Speed: %d mm/s\n", axis.speed);

    /* 'axis' es un alias del struct creado
     * no se puede reusar para crear nuevos objetos
     *
     * struct axis ax1; 
     */

    reading.dist = 120;
    printf("Distance: %d mm\n", reading.dist);

    reading.temp = 24.5f; /* reemplaza el valor de dist */
    printf("Temperature: %.1f C\n", reading.temp);

    return 0;
}
