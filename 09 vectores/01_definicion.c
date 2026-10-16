/*
 * arrays
 *
 * Un array es una colección de elementos del mismo tipo almacenados
 * en posiciones contiguas de memoria. Cada elemento se identifica por
 * un índice, que comienza en 0. Y el último elemento es N-1 donde 
 * N es el tamaño del array. Esto permite acceder a cualquier elemento 
 * directamente mediante su posicióno sin recorrer los anteriores.
 *
 * Durante la inicialización, se puede asignar valores en el momento
 * de la declaración. También pueden inicializarse solo algunos de 
 * los elementos mediante inicalización designada. Si se proporcionan 
 * menos valores que el tamaño del array, el resto se incializa a 0.
 * También es posible omitir el tamaño y dejar que el compilador lo
 * deduzca automáticamente a partir de los valores.
 * 
 */

#include <stdio.h>

int main(void) {

    /* declaración e incialización completa*/
    int arr[5] = {10, 20, 30, 40, 50};

    /* acceso por índice */
    printf("arr[2]=%d\n", arr[2]);

    /* modificación del último elemento */
    arr[4] = 25;
    printf("arr[1]=%d\n", arr[4]);

    /* inicialización con tamaño deducido automáticamente */
    int gain[] = {2, 4, 8};

    /* inicialización parcial (el resto se completa con 0) */
    int off[3] = {10, 20};

    /* inicialización designada (el resto se completa con 0)*/
    int rpm[5] = {
        [1] = 20,           /* elemento 2 */
        [3 ... 4] = 40      /* elemento 4 y 5 */
    };

    printf("Target=%d Offset=%d Gain=%d\n", rpm[2], off[2], gain[1]);

    return 0;
}