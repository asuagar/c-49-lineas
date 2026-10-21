/*
 * typedef
 *
 * Typedef permite crear un alias (nombre alternativo) para un tipo.
 * Se puede aplicar a struct, union y  enum. No define un tipo nuevo, 
 * sino otra forma de referirse al mismo tipo. Al usarlo, no hace 
 * falta escribir la palabra clave struct, union o enum.
 * 
 * Su principal ventaja es simplificar la sintaxis y mejorar la legibilidad.
 * Sin embargo, este beneficio tiene un coste: el alias puede ocultar
 * información relevante sobre el tipo real al omitir su mención cuando se
 * utiliza.
 *
 */

#include <stdio.h>

typedef struct {
    int x;
    int y;
} point;

typedef enum {
    OFF,
    ON
} state;

typedef union {
    int i;
    float f;
} value;

int main(void)
{
    point p = {1, 2};
    state s = ON;
    value v;

    v.i = 10;

    printf("Point: (%d, %d)\n", p.x, p.y);
    printf("State: %d\n", s);
    printf("Value: %d\n", v.i);

    return 0;
}
