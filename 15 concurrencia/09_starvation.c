/* starvation
 *
 * La inanición (starvation ) ocurre cuando un hilo apenas consigue
 * acceder a un recurso porque otro lo adquiere repetidamente.
 * A diferencia del deadlock, el sistema sigue avanzando, pero algunos
 * hilos pueden quedarse sin progreso. Este problema suele aparecer 
 * con políticas de planificación injustas o secciones críticas
 *  demasiado largas. 
 */

#include <stdio.h>
#include <pthread.h>

pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

void *greedy(void *arg)
{
    while (1) {
        pthread_mutex_lock(&lock);
        printf("greedy thread\n");
        pthread_mutex_unlock(&lock);
    }
    return NULL;
}

void *starved(void *arg)
{
    while (1) {
        pthread_mutex_lock(&lock);
        printf("starved thread\n");
        pthread_mutex_unlock(&lock);
    }
    return NULL;
}

int main(void)
{
    pthread_t t1, t2;
    pthread_create(&t1, NULL, greedy, NULL);
    pthread_create(&t2, NULL, starved, NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    return 0;
}
