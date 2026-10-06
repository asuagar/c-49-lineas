/*
 * literales
 *
 * Un literal expresa un valor directamente en el código: 42, 12.5 o 'A'.
 * Su notación determina cómo se interpreta. La variable no conserva
 * la base empleada para escribirlo. El tipo debe admitir ese valor.
 *
 */

#include <stdio.h>

int main(void)
{
    // Números enteros.
    int decimal = 42;
    int octal = 052;               // Un cero inicial indica base ocho.
    int hexadecimal = 0x2A;        // Requiere de C99.
    int binary = 0b101010;         // Requiere de C23.

    printf("Enteros: %d, %d, %d, %d\n",
           decimal, octal, hexadecimal, binary);

    // Números de coma flotante.
    double real_decimal = 12.5;
    double scientific = 1.25e1;    // 1.25 por 10 elevado a 1.
    double real_hex = 0x1.9p3;     // (1 + 9/16) por 2 elevado a 3.

    printf("Coma flotante: %.1f, %.1f, %.1f \n",
           real_decimal, scientific, real_hex);

    // Caracteres.
    char direct = 'A';
    char octal_escape = '\101';
    char hex_escape = '\x41';

    printf("Caracteres: %c, %c, %c \n",
           direct, octal_escape, hex_escape);

    return 0;
}
