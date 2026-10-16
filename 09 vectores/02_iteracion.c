/*
 * iteración
 *
 * Para trabajar con todos los elementos de un array, lo habitual es
 * recorrerlo con un bucle for. Este patrón permite acceder a cada
 * posición usando el índice.
 *
 * Es importante conocer el tamaño del array para evitar accesos fuera
 * de rango. En este ejemplo, se calcula automáticamente usando 
 * sizeof(x) que devuelve el tamaño en bytes de x.
 * 
 */

#include <stdio.h>

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);  /* número de elementos */

    for (int i = 0; i < n; i++) {
        printf("sample[%d] = %d\n", i, arr[i]);
    }

    return 0;
}