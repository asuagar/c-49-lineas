/*
 * guardas de inclusión (include guards)
 *
 * Cuando un programa crece y se divide en varios ficheros, es habitual
 * que una misma cabecera se incluya desde distintos puntos. El problema
 * es que el preprocesador no “recuerda” qué ha incluido antes: cada vez
 * que encuentra un #include, inserta de nuevo todo el contenido.
 *
 * Esta repetición puede provocar errores de compilación, por ejemplo,
 * redefiniciones de tipos o funciones. Para evitarlo, se introduce un
 * pequeño mecanismo de control: los include guards.
 *
 * La idea consiste en asociar a cada cabecera un identificador único.
 * La primera vez que se procesa el fichero, ese identificador no existe,
 * por lo que se define y se permite el paso al contenido. En las siguientes
 * inclusiones, el identificador ya está definido y el preprocesador omite
 * todo el bloque. El patrón habitual es:
 *
 *   #ifndef NOMBRE_UNICO
 *   #define NOMBRE_UNICO
 *
 *   ... contenido de la cabecera ...
 *
 *   #endif
 *
 * Este patrón no añade coste en ejecución y se ha convertido en una
 * convención prácticamente universal en C. Como alternativa, algunos
 * compiladores aceptan #pragma once, que logra el mismo efecto con
 * una sintaxis más breve. Sin embargo, no forma parte del estándar C, 
 * siendo el estándar y opción más portable las guardas de inclusíon.
 * 
 */

#ifndef MATH_UTILS_H
#define MATH_UTILS_H

int add(int a, int b);
int mul(int a, int b);

#endif /* MATH_UTILS_H */
