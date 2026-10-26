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
 * orden, valores o designada desde C99. Las llaves solo se pueden
 * usar en la misma línea que la declaración.
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
    /* declaración e inicialización por orden */
    struct point p1 = {1, 2};
    printf("p1: (%d, %d)\n", p1.x, p1.y);

    /* inicialización después de la declaración */
    struct point p2;
    p2.x = 3;
    p2.y = 4;
    printf("p2: (%d, %d)\n", p2.x, p2.y);

    /* copia y modificación*/
    struct point p3 = p1;
    p3.x = p3.x + 10;
    printf("p3: (%d, %d)\n", p3.x, p3.y);

    /* declaración e inicalización desginada parcial*/
    struct point p4 = {.x = 7};
    printf("p4: (%d, %d)\n", p4.x, p4.y);

    return 0;
}
