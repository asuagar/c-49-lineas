/*
 * inline
 *
 * En un sistema embebido, un ciclo de control puede llamar muchas veces a
 * una función pequeña, por ejemplo para limitar la orden de un motor.
 * En una llamada normal, el programa salta a la función, le pasa los datos
 * y vuelve con el resultado. Ese salto y retorno tienen un coste pequeño.
 *
 * inline sugiere al compilador que ponga el código de la función en el lugar
 * donde se usa, en vez de mantener ese salto y retorno. A esto se le llama
 * expandir la función. Lo decide el compilador, no el programador: inline no
 * garantiza la expansión ni obliga a copiar literalmente las instrucciones.
 * Así puede reducir el coste, pero aumentar el tamaño.
 * 
 */
#include <stdio.h>

inline int limit_motor_command(int command) {
    if (command < 0) {
        return 0;
    }
    if (command > 100) {
        return 100;
    }
    return command;
}

int main(void) {
    int requested[] = {20, 125, -10};
    size_t count = sizeof(requested) / sizeof(requested[0]);

    for (size_t i = 0; i < count; ++i) {
        int command = limit_motor_command(requested[i]);

        printf("ciclo %zu: solicitada=%d, enviada=%d\n",
               i + 1, requested[i], command);
    }
    return 0;
}
