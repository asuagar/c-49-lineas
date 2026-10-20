/* join y exit
 *
 * Una vez creado el hilo, es necesario coordinar su finalización. Si el
 * hilo principal termina antes, el proceso puede finalizar sin que los
 * hilos secundarios hayan completado su trabajo.
 *
 * pthread_join() permite esperar a que un hilo termine. Esta llamada
 * bloquea el hilo actual hasta que el hilo indicado finaliza, introduciendo
 * sincronización entre hilos y garantizando un comportamiento predecible.
 *
 * Por su parte, pthread_exit() finaliza explícitamente el hilo actual sin
 * terminar el proceso completo, lo que permite que otros hilos sigan
 * ejecutándose.
 */

#include <stdio.h>
#include <pthread.h>

void *task(void *arg)
{
    printf("thread working\n");
    /* finalizar el hilo
     * retval=NULL: valor de retorno del hilo (no se devuelve resultado)
     */
    pthread_exit(NULL);
}

int main(void)
{
    /* crear hilo */
    pthread_t tid;
    if (pthread_create(&tid, NULL, task, NULL) != 0) {
        printf("error creating thread\n");
        return 1;
    }

    /* esperar finalización hilo
     * tid: identificador del hilo a esperar
     * retval=NULL: no se recoge el valor de retorno del hilo
     */
    pthread_join(tid, NULL); 
    printf("thread finished\n");

    return 0;
}