/*
 * structs
 *
 * En C, una estructura permite agrupar varios datos de mismo o
 * distinto tipo. Es un tipo de dato compuesto. El acceso a los 
 * miembros se realiza con el operador '.', que permite leer y 
 * modificar cada campo de forma independiente.
 * 
 * Al igual que otros tipos, una estuctura tiene una declaración 
 * y una incialización. La inicalización se puede hacer por
 * orden, valores o designada desde C99.
 * 
 * Otra de las ventajas de los structs, es la facilidad para su
 * copia. Al asignar una estructura a otra, se copian todos sus
 * elementos.
 */

#include <stdio.h>

/* declaración */
struct point {
    int x;
    int y;
};

int main(void)
{
    struct point p1, p2, p3, p4;

    /* inicialización por orden */
    p1 = {1, 2};
    printf("p1: (%d, %d)\n", p1.x, p1.y);

    /* inicialización de valores */
    p2.x = 3;
    p2.y = 4;
    printf("p2: (%d, %d)\n", p2.x, p2.y);

    /* copia y modificación*/
    p3 = p1;
    p3.x = p3.x + 10;
    printf("p3: (%d, %d)\n", p3.x, p3.y);

    /* inicalización desginada parcial*/
    struct point p4 = {.x = 7};
    printf("p4: (%d, %d)\n", p4.x, p4.y);

    return 0;
}