/*
 * borrado
 *
 * En C es posible eliminar un fichero del sistema mediante la función
 * remove(). Esta función recibe el nombre del fichero y solicita al
 * sistema operativo su eliminación.
 *
 * La operación puede fallar por distintos motivos, como que el fichero
 * no exista o que no se tengan permisos suficientes. Por ello, conviene
 * comprobar siempre el valor de retorno.
 *
 * remove() devuelve 0 si la operación tiene éxito y un valor distinto
 * de cero en caso de error.
 */

#include <stdio.h>

int main(void)
{
    int status = remove("output.txt");

    if (status == 0) {
        printf("file deleted\n");
    } else {
        printf("error deleting file\n");
    }

    return 0;
}