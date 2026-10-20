/*
 * identificador
 *
 * Además de crear hilos, es posible gestionarlos durante su ejecución.
 * pthread_self() permite obtener el identificador del hilo actual, lo
 * que resulta útil para depuración o trazas. Por otro lado,
 * pthread_cancel() permite solicitar la finalización de un hilo.
 * 
 * Es importante entender que pthread_cancel() no detiene el hilo de forma
 * inmediata, sino que envía una solicitud de cancelación. El hilo solo
 * finalizará cuando alcance un punto de cancelación o compruebe su estado.
 *
 * Por ello, es necesario usar pthread_join() incluso después de solicitar
 * la cancelación. Esta llamada espera a que el hilo termine realmente y
 * permite liberar correctamente los recursos asociados.
 */

#include <stdio.h>
#include <pthread.h>

void *task(void *arg)
{
    printf("thread id: %lu\n", (unsigned long)pthread_self());

    for (int i = 0; i < 5; i++) {
        printf("working...\n");
    }

    return NULL;
}

int main(void)
{
    pthread_t tid;
    if (pthread_create(&tid, NULL, task, NULL) != 0) {
        printf("error creating thread\n");
        return 1;
    }

    pthread_cancel(tid);        /* solicitar cancelación */
    pthread_join(tid, NULL);    /* esperar y limpiar*/

    return 0;
}