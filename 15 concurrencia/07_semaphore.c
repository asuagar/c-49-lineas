/* sempahore
 *
 * Un semáforo es un mecanismo de sincronización basado en un contador.
 * Permite controlar cuántos hilos pueden acceder simultáneamente a un
 * recurso compartido. A diferencia del mutex que permite solo uno, 
 * un semáforo puede permitir varios accesos concurrentes.
 *
 * Se usa típicamente en problemas productor-consumidor o para limitar
 * el acceso a recursos finitos.
 */

#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

sem_t sem;

void *task(void *arg)
{
    sem_wait(&sem);  /* decrementar y esperar si es 0 */
    printf("thread inside critical section\n");
    sem_post(&sem);  /* liberar */

    return NULL;
}

int main(void)
{
    pthread_t t1, t2;

    /* sem: dirección del semáforo
     * pshared=0: compartido entre hilos del proceso
     * value=1: solo un hilo puede acceder (semáforo binario = mutex)
     */
    sem_init(&sem, 0, 1);

    pthread_create(&t1, NULL, task, NULL);
    pthread_create(&t2, NULL, task, NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    sem_destroy(&sem);

    return 0;
}