/*
 * estructura del programa 
 *
 * Este ejemplo muestra la estructura básica de un programa en C.
 * Todo programa comienza en main y sigue las instrucciones en orden.
 * 
 */

/* archivos de cabecera, proporcionan funciones listas para usar */
#include <stdio.h>  

/* punto de comienzo del programa */
int main()
{
	/* declaración de variables antes de usarlas */
    int a, b, c;  

	/* asignación de valor */
    a = 5;
    b = 3;

	/* operación aritmética */
    c = a + b;

 	/* %d indica un número entero */
    printf("sum is %d\n", c); 

	/* devolver cero implica finalización con éxito */
    return 0;
}