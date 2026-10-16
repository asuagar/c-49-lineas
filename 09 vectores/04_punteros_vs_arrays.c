/*
 * punteros vs arrays
 *
 * El nombre de un array se comporta como la dirección de su primer
 * elemento. Por eso, puede usarse como un puntero en muchas expresiones.
 * Esto permite acceder a los elementos tanto mediante índices como
 * mediante aritmética de punteros.
 *
 * Sin embargo, un array y un puntero no son lo mismo. El nombre del
 * array no es una variable modificable: su dirección es fija y no puede
 * cambiarse. Por eso, una instrucción como "a = b" produce un error de
 * compilación. Aunque se puede modificar elemento a elemento.
 * 
 */

#include <stdio.h>

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;  /* p apunta al primer elemento */

    /* acceso equivalente */
    printf("arr[0] = %d , *p = %d\n", a[0], *p);
    printf("arr[2] = %d , *(p+2) = %d\n", a[2], *(p + 2));

    /* diferencia: el puntero puede cambiar */
    int vec[3] = {10, 20, 30};
    p = vec;  /* ahora apunta a otro array */
    printf("p[0] = %d\n", p[0]);

    /* arr = vec; */  /* error: array type is not assignable */

    /* alternativa: copia elemento a elemento */
    for (int i = 0; i < 5; i++) {
        arr[i] = vec[i];
    }

    return 0;
}