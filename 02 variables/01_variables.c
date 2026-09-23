/*
 * variables 
 *
 * Una variable en C es un espacio en memoria etiquetado con un nombre.
 * Ese nombre permite almacenar y recuperar un valor sin usar una dirección
 * de memoria en formato hexadecimal.
 *
 * Cada variable tiene un tipo asociado (int, float, char, etc.), que
 * indica qué tipo de dato puede guardar. La cantidad de memoria que ocupa
 * una variable depende de su tipo. 
 *
 */

#include <stdio.h>

int main()
{
    int arm_angle;   /* reserva espacio en memoria para una variable tipo entero */

    arm_angle = 25;  /* se almacena un valor en esa posición */

    printf("Arm Angle = %d\n", arm_angle); /* se recupera el valor */

    /* sizeof devuelve el tamaño en bytes de la variable */
    printf("Arm Angle size: %zu bytes\n", sizeof(arm_angle));

    return 0;
}