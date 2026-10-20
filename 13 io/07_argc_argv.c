
/*
 * argc y argv
 *
 * Un programa puede recibir argumentos por línea de comandos.
 * En main(int argc, char *argv[]), argc indica cuántas cadenas
 * se han recibido y argv permite acceder a ellas. Habitualmente, 
 * argv[0] contiene el nombre de invocación del programa. 
 * argv[1] contiene el primer argumento introducido;
 * argv[2], el segundo, y así sucesivamente. Sin argumentos 
 * adicionales, argc normalmente vale 1.
 *
 * Ejemplo de ejecución desde la terminal:
 *
 *     ./programa explorar norte sur
 *
 * La terminal ejecuta el programa y este comienza en main.
 * En este ejemplo, argc vale 4 y los parámetros son:
 *
 * - argv[0]: "./programa"; 
 * - argv[1]: "explorar";
 * - argv[2]: "norte"; 
 * - argv[3]: "sur".
 * - argv[argc] es siempre un puntero nulo, no otra cadena.
 *
 */

#include <stdio.h>  // printf y NULL.

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("Número de parámetros insuficiente. \n");
        return 1;
    }

    printf("Mision: %s\n", argv[1]);

    for (int i = 2; i < argc; i++) {
        printf("Destino %d: %s\n", i - 1, argv[i]);
    }

    printf("El puntero final es NULL: %s\n",
           argv[argc] == NULL ? "si" : "no");

    return 0;
}