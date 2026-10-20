/*
 * stack (pila)

 * El stack gestiona la memoria de forma automática durante la ejecución.
 * Cada llamada a función crea un nuevo marco (stack frame) que contiene
 * sus variables locales y parámetros. Cuando la función termina, ese
 * marco se libera inmediatamente. La pila crece hacia abajo al añadir
 * nuevo contenido y la lectura de información es rápida, ya que 
 * el acceso a la memoria es secuencial y predecible.
 *
 * Este comportamiento hace que el stack sea eficiente y rápido, pero
 * también implica que las variables locales solo existen dentro del
 * bloque donde se declaran. No pueden usarse fuera de su ámbito.
 * 
 * Su tamaño es limitado y depende del sistema. En entornos de escritorio
 * suele estar en el orden de varios megabytes, mientras que en sistemas
 * embebidos puede reducirse a pocos kilobytes. Por ello, el uso del stack
 * es generalmente seguro para datos pequeños, pero no es adecuado para
 * estructuras grandes o recursión profunda.
 *
 */

#include <stdio.h>

void func(int n)
{
    int local = n;  /* variable en el stack */
    printf("local=%d\n", local);
}

int main(void)
{
    int a = 1;  /* stack */

    func(a);
    func(a + 1);

    return 0;
}