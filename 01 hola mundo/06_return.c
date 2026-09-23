/*
 * return
 *
 * Todo programa en C finaliza devolviendo un valor entero al sistema
 * operativo. Este valor indica si la ejecución ha sido correcta o si
 * se ha producido algún error.
 *
 * Por convenio, se utiliza return 0 para señalar que todo ha ido bien,
 * mientras que cualquier valor distinto de cero indica algún tipo de error.
 * Este mecanismo es especialmente útil cuando los programas se integran
 * en scripts o en cadenas de ejecución automatizadas.
 *
 * Este valor no se muestra automáticamente por pantalla. Lo recoge el
 * sistema operativo y puede consultarse desde la terminal tras ejecutar
 * el programa. En Linux, se obtendría el valor mediante los siguientes
 * comandos:
 * 
 *      gcc program.c 
 *      ./a.out
 *      echo $?
 * 
 */

#include <stdio.h>

int main(void)
{
    printf("Battery check completed\n");

    return 0;  /* indicar ejecución correcta */
}