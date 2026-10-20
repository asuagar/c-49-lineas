/*
 * include
 *
 * La directiva #include permite insertar el contenido de otro fichero
 * antes de la compilación. Este mecanismo es la base del uso de cabeceras
 * (header files), normalmente con extensión .h. Un header suele contener
 * declaraciones (funciones, tipos, macros) que pueden ser reutilizadas en
 * varios ficheros fuente.
 *
 * Existen dos formas de inclusión:
 *
 * - #include <...> 
 *   Se utiliza para cabeceras estándar o instaladas en el sistema. 
 *   El compilador busca en rutas predefinidas.
 * 
 *
 * - #include "..."
 *   Se utiliza para cabeceras propias del proyecto. El compilador
 *   busca primero en el directorio local y después en rutas del sistema
 *
 * En la práctica, esta separación permite organizar programas en varios
 * módulos sin duplicar definiciones.
 * 
 */

#include <stdio.h>   /* cabecera estándar */

/* cabecera definida por el usuario en el directorio local */
/* #include "math_utils.h" */

/* cabecera definida por el usuario en el directorio lib */
/* #include "lib/math_utils.h" */

int main(void)
{
    printf("Using standard header\n");

    return 0;
}