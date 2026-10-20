/*
 * scanf y getchar: entrada con formato y carácter a carácter
 *
 * scanf() convierte texto de stdin según un formato. %d requiere
 * un int * y %lf, un double *; & obtiene la dirección de cada variable.
 * %11s lee una palabra de hasta 11 caracteres y añade '\0':
 * el array necesita 12 posiciones y su nombre se pasa sin &.
 *
 * scanf() devuelve el número de asignaciones realizadas, o EOF si
 * falla la entrada antes de la primera conversión. Comprobar este
 * retorno no valida toda la línea ni el rango de los valores.
 * %s, %d y %lf omiten blancos iniciales; %c no. " %c" sí los omite.
 *
 * getchar() lee el siguiente carácter de stdin sin convertirlo.
 * Tras scanf(), puede quedar texto pendiente, incluido '\n'.
 * Aquí se descarta el resto de esa línea antes de leer otra.
 * Devuelve un unsigned char convertido a int, o EOF al terminar
 * la entrada o producirse un error.
 */

#include <stdio.h>  // entrada y salida estándar
int main(void)
{
    char motor[12];
    int rpm, c;
    double current;

    printf("Enter motor, rpm and current [A]: ");
    if (scanf("%11s %d %lf", motor, &rpm, &current) != 3) {
        puts("Input error");
        return 1;
    }
    printf("Motor %s: %d rpm, %.2f A\n", motor, rpm, current);

    /* imprimir caracteres hasta introducir EOF (Ctrl+D) */
    puts("Type text (end with EOF):");
    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}
