/*
 * puntero a structs
 *
 * Trabajar con estructuras mediante punteros permite evitar copias y
 * compartir datos entre funciones. En este contexto, el operador '->'
 * se usa para acceder a los campos de la estructura a través del puntero.
 *
 * Es equivalente a (*p).campo, pero más legible y habitual.
 * 
 */

#include <stdio.h>

struct point {
    int x;
    int y;
};

void move(struct point *p)
{
    p->x = p->x + 1;  /* modificar campo a través del puntero */
    p->y = p->y + 1;
}

int main(void)
{
    struct point p1 = {1, 2};
    struct point *ptr = &p1;  /* puntero a estructura */
    printf("before: (%d, %d)\n", ptr->x, ptr->y);

    move(ptr);  /* pasar dirección */
    printf("after: (%d, %d)\n", ptr->x, ptr->y);

    return 0;
}
