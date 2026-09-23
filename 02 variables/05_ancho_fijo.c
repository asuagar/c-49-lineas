/*
 * tipos de ancho fijo
 *
 * Los tipos básicos (int, long, etc.) no tienen un tamaño fijo.
 * Por ejemplo, int puede ser de 16, 32 o 64 bits. Su ancho depende 
 * de la arquitectura y del compilador. Esto puede causar errores 
 * cuando se asume un tamaño concreto y se usa el programa en distintas plataformas.
 *
 * Para evitar este problema, el estándar C99 introdujo la librería <stdint.h>.
 * Esta librería proporciona tipos con tamaño fijo, como int8_t, int16_t
 * o int32_t. Con ellos, sabemos exactamente cuántos bits ocupa cada variable,
 * lo que hace el código más claro y portable.
 *
 * Referencia: ISO/IEC 9899:1999 (C99), sección 7.18.
 * 
 */

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int a = 1000;           /* tamaño dependiente de la plataforma */
    long b = 1000L;         /* también dependiente */

    int16_t x = 1000;       /* 16 bits con signo */
    uint8_t y = 0xFF;       /* 8 bits sin signo */
    int32_t z = -50000;     /* 32 bits */

    printf("sizeof(int)=%zu sizeof(long)=%zu\n", 
        sizeof(a), sizeof(b));

    printf("sizeof(int16_t)=%zu sizeof(uint8_t)=%zu sizeof(int32_t)=%zu\n",
        sizeof(x), sizeof(y), sizeof(z));

    return 0;
}