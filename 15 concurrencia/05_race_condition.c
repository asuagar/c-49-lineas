/*
 * race condition
 *
 * Una condición de carrera (race condition) aparece cuando varios hilos
 * acceden simultáneamente a una zona de memoria y lo modifican sin 
 * coordinarse. El resultado final depende del orden de ejecución de los
 * hilos, que no está garantizado, lo que introduce un comportamiento
 * no determinista.
 *
 * Para evitar condiciones de carrera, es necesario introducir mecanismos
 * de sincronización que garanticen acceso exclusivo al recurso compartido.
 * Entre las soluciones más habituales se encuentran mutex y semáforos. 
 * La idea fundamental es proteger la sección crítica del código, es decir,
 * la parte donde se accede o modifica el recurso compartido.
 * 
 */

#include <stdio.h>
#include <pthread.h>

int counter = 0;

void *increment(void *arg)
{
    for (int i = 0; i < 100000; i++) {
        counter++;  /* acceso no protegido */
    }
    return NULL;
}

int main(void)
{
    pthread_t t1, t2;

    pthread_create(&t1, NULL, increment, NULL);
    pthread_create(&t2, NULL, increment, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    /* resultado no determinista */
    printf("counter=%d\n", counter);

    return 0;
}