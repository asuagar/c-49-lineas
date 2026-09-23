/*
 * conversiones de tipo
 *
 * En C, una expresión puede combinar valores de distintos tipos.
 * Las conversiones aritméticas usuales determinan cómo se convierten
 * antes de operar; no siempre se conserva toda la precisión.
 *
 * Un cast hace explícita una conversión. Úsalo cuando aclara la
 * intención, no de forma automática: puede ocultar avisos y no impide
 * que se pierda información.
 *
 * Al convertir un número real a entero, se descarta la fracción
 * hacia cero. Si el valor no cabe en el tipo entero, el resultado
 * no está definido por el estándar de C.
 */

#include <stdio.h>

int main(void)
{
    int pulses = 5;
    float ratio = 2.5f;

    /* En la suma, pulses se convierte según las reglas aritméticas. */
    float mixed = pulses + ratio;

    /* El cast permite realizar una división real. */
    float half = (float)pulses / 2;

    /* La fracción se descarta hacia cero: el resultado es 3. */
    int whole = (int)3.9f;

    printf("mixed=%.2f half=%.2f whole=%d\n", mixed, half, whole);
    return 0;
}