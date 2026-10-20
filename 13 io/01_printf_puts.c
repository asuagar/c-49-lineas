/*
 * printf
 *
 * Para combinar texto con valores, C proporciona printf.
 * Contiene texto literal y conversiones que indican 
 * cómo mostrar los datos. Por ejemplo: %d muestra un int; 
 * %.2f muestra un double con dos decimales; %% escribe un 
 * porcentaje literal; '\n' escribe un salto de línea; ...
 *
 * La función devuelve el número de caracteres escritos 
 * o un valor negativo si ocurre un error de salida o 
 * codificación.
 *
 * Otra alternativa para imprimir mensajes es la función puts().
 * Esta función imprimie el literal de texto, sin opción
 * a formateo. También añade el retorno de carro '\n' a cada
 * línea.
 *
 */

#include <stdio.h>  // printf

int main(void) {
    const double voltage = 11.7;
    const double current = 2.4;
    const int charge = 75;
    const double power = voltage * current;

    if (printf("Battery: %d%% | %.2f V | %.2f A | %.2f W\n",
               charge, voltage, current, power) < 0) {
        return 1;
    }
    return 0;
}
