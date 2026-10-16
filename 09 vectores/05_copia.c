/*
 * copia de arrays
 *
 * Un array almacena sus elementos en posiciones contiguas de memoria.
 * En C no es posible copiar un array mediante una asignación directa:
 *
 *     dst = src;  // Error: los arrays no son asignables.
 *
 * Si dst y src son punteros, la asignación dst = src solo copia una
 * dirección. Ambos punteros señalarían el mismo array; sus elementos
 * no se copiarían.
 * 
 */

#include <stdio.h>

void copyarr(int *dst, int *src, int n)
{
    while (n > 0) {
        *dst = *src;
        dst++;
        src++;
        n--;
    }
}

int main(void)
{
    int set[] = {1000, 1200, 1400};
    int n = sizeof(set) / sizeof(set[0]);
    int bak[n];

    copyarr(run, set, n);

	/* Original */
    for (int i = 0; i < n; i++){
    	printf("%d rpm ", set[i]);
	}

	/* Copied */
    for (int i = 0; i < n; i++){
    	printf("%d rpm ", bak[i]);
	}

    return 0;
}