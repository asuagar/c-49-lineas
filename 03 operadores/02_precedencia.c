/*
 * precedencia
 *
 * Cuando una expresión contiene varios operadores, el resultado depende
 * del orden en que se evalúan. En C, este orden sigue reglas de precedencia.
 *
 * Una forma sencilla de recordarlas es la regla PMDAS:
 * primero Paréntesis (), después Multiplicación (*), División (/),
 * y finalmente Adición (+) y Substracción (-).Por ejemplo, en la expresión 
 * a + b * c, la multiplicación se realiza antes que la suma. Si queremos 
 * cambiar ese orden, debemos usar paréntesis.
 *
 * Aunque el lenguaje define estas reglas con precisión, en la práctica es
 * recomendable escribir expresiones claras y usar paréntesis cuando haya
 * cualquier duda.
 * 
 */

#include <stdio.h>

int main()
{
    int a = 2, b = 3, c = 4;

    int x = a + b * c;      /* 2 + (3 * 4) = 14 */
    int y = (a + b) * c;    /* (2 + 3) * 4 = 20 */

    int z = 20 - 10 / 2;    /* 20 - (10 / 2) = 15 */
    int t = (20 - 10) / 2;  /* (20 - 10) / 2 = 5 */

    printf("x=%d y=%d\n", x, y);
    printf("z=%d t=%d\n", z, t);

    return 0;
}