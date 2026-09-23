/*
 * bloques
 *
 * Una sentencia compuesta o bloque agrupa instrucciones entre llaves.
 * Se usa, por ejemplo, en el cuerpo de un condicional o de un bucle.
 *
 * Un bloque interior puede usar nombres declarados en bloques
 * exteriores; el bloque exterior no puede usar nombres locales del
 * interior. Al salir del bloque termina la duración de las variables
 * automáticas declaradas en él.
 * 
 */

#include <stdio.h>

int main()
{
    int angle = 90;

    {
        int corr = 5;

        angle += corr;
        printf("Corrected angle: %d degrees\n", angle);
    }

    printf("Final angle: %d degrees\n", angle);

    /* produce un error, puesto que corr solo existe dentro del bloque*/
    // printf("Correction: %d degrees\n", corr);

    return 0;
}
