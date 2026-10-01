/*
 * if-else
 *
 * La estructura if-else permite definir dos caminos de ejecución 
 * según una condición. Sin embargo, en muchos problemas reales
 * necesitamos evaluar más de dos casos. Para ello, C permite 
 * encadenar condiciones mediante if-else-if, evaluando cada condición 
 * en orden hasta encontrar una verdadera.
 *
 */

#include <stdio.h>

int main(void)
{
    int dist = 35;

    /* if-else */
    if (dist < 20) {
        printf("Stop \n");
    } else {
        printf("Move \n");
    }

    /* if-else-if */
    if (dist < 20) {
        printf("Stop\n");
    } else if (dist < 50) {
        printf("Slow down\n");
    } else {
        printf("Move\n");
    }

    return 0;

}
