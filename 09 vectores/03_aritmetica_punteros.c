/*
 * aritmética de punteros
 *
 * Los punteros permiten recorrer memoria de forma controlada. Al sumar
 * o restar un entero a un puntero, no se avanza en bytes, sino en el
 * tamaño del tipo apuntado.  Por ejemplo, si p es int *, 
 * entonces p + 1 apunta al siguiente int, no al siguiente byte.
 * 
 * En el caso de los arrays, el nombre del array se comporta como un
 * puntero al primer elemento. Es decir, la expresión "a" es equivalente
 * a "&a[0]". Recordar que un array es un cojunto de elementos en 
 * celdas contiguas de memoria. La disposición contigua hace útil 
 * la aritmética de punteros al trabajar con arrays.
 * 
 */

#include <stdio.h>

int main(void)
{
    int samples[] = {10, 20, 30, 40};

    /* apunta al primer elemento de la lista &[0]*/
    int *p = samples; 
    printf("*p = %d\n", *p);  /* 10 */

    /* avanza al siguiente elemento*/
    p = p + 1; 
    printf("*p = %d\n", *p);  /* 20 */

    /* forma abreviada */
    p++;
    printf("*p = %d\n", *p);  /* 30 */

    /* recorrido completo */
    int n = sizeof(samples) / sizeof(samples[0]);
    p = samples;
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}