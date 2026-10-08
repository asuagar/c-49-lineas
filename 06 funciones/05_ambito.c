/*
 * ámbito
 *
 * Al definirse entre llaves, una función tiene un ámbito local. 
 * Las variables locales solo son visibles dentro de la
 * función donde se declaran.
 *
 * Una variable externa (o global) se declara fuera de cualquier función.
 * Su ámbito abarca todo el fichero y puede ser utilizada por todas las
 * funciones definidas en él.
 *
 * Las variables locales pueden ocultar variables externa
 * el mismo nombre. Este efecto se conoce como shadowing.
 *
 */

#include <stdio.h>

/* variable externa */
int counter = 5;

void print_global_increment(void);
void print_local_variable(void);

int main(void)
{
    print_global_increment();
    print_local_variable();

    print_global_increment();
    print_local_variable();

    return 0;
}

void print_global_increment(void)
{
    counter = counter + 1;  /* modifica la variable externa */
    printf("global counter = %d\n", counter);
}

void print_local_variable(void)
{
    /* shadowing */
    int counter = 42;
    printf("local counter = %d\n", counter);
}