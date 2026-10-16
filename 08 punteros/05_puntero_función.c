/*
 * punteros a función
 *
 * En C, una variable puede almacenar la dirección de una función. Así,
 * el programa puede decidir qué operación ejecutar sin cambiar la función
 * que realiza la llamada.
 *
 * Una función recibida como argumento se denomina callback. La función
 * apply no necesita saber si va a sumar o multiplicar: recibe una operación
 * y la llama con dos valores.
 *
 * En int (*op)(int, int), op es un puntero a una función que recibe dos
 * valores int y devuelve otro valor int. Los paréntesis alrededor de *op
 * son necesarios: sin ellos, la declaración tendría otro significado.
 * 
 */

#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int mul(int a, int b)
{
    return a * b;
}

int main(void)
{
    // declarar un puntero a función
    int (*op)(int, int);

    // asignar una función
    op = add;
    printf("add: %d\n", op(5, 3));

    // cambiar la función apuntada
    op = mul;
    printf("mul: %d\n", op(5, 3));

    return 0;
}