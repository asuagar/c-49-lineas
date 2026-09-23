/*
 * identificadores
 *
 * En C, un identificador es el nombre que damos a los elementos del programa,
 * como variables o funciones. Estos nombres nos permiten referirnos a los datos
 * y reutilizarlos a lo largo del código. Por ejemplo, en "int speed = 20;",
 * la palabra "speed" es un identificador.
 *
 * Existen reglas sencillas que los identificadores deben cumplir.
 * Un identificador debe empezar por una letra o por '_', y puede
 * contener letras, números y guiones bajos. Además, distingue entre mayúsculas
 * y minúsculas, por lo que "motor" y "Motor" son distintos.
 *
 * Tampoco se pueden usar palabras reservadas del lenguaje (int, return, if, ...),
 * ya que tienen un significado especial. 
 *
 */

#include <stdio.h>

int main()
{
    int voltage = 25;          /* válido: comienza por letra */
    int battery_voltage = 30;  /* válido: descriptivo */
    int _voltage = 10;         /* válido: comienza por '_' */

    // int 1voltage = 5;      /* inválido: empieza por número */
    // int bat-voltage = 5;   /* inválido: contiene '-' */
    // int return = 5;        /* inválido: palabra reservada */

    printf("voltage = %d\n", voltage);
    printf("battery_voltage = %d\n", battery_voltage);
    printf("_voltage = %d\n", _voltage);

    return 0;
}