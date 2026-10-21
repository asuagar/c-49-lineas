/*
 * tamaño de una unión
 *
 * El tamaño de una union viene determinado por el tamaño de su miembro
 * más grande. Esto se debe a que todos los campos comparten la misma
 * zona de memoria.
 *
 * En structs, el compilador puede añadir padding, es decir,
 * bytes adicionales entre campos o al final, para alinear los datos en
 * memoria según los requisitos de la arquitectura. Esto mejora el acceso
 * a memoria, pero incrementa el tamaño total.
 *
 */

 #include <stdio.h>

struct record {
    char c;
    int i;
};

union data {
    int i;
    float f;
    char c;
};

int main(void)
{
    size_t member_bytes = sizeof(char) + sizeof(int);
    size_t padding = sizeof(struct record) - member_bytes;

    printf("sizeof(int)   = %zu\n", sizeof(int));
    printf("sizeof(float) = %zu\n", sizeof(float));
    printf("sizeof(char)  = %zu\n", sizeof(char));
    printf("sizeof(union data) = %zu\n", sizeof(union data));

    printf("sizeof(struct record) = %zu\n", sizeof(struct record));
    printf("miembros de record   = %zu\n", member_bytes);
    printf("padding total        = %zu\n", padding);

    return 0;
}
