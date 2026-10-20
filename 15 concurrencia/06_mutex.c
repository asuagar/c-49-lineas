/* mutex
 *
 * Un mutex (mutual exclusion) es un mecanismo de sincronización que
 * garantiza que solo un hilo accede a un recurso compartido a la vez.
 *
 * Se utiliza para proteger la sección crítica del programa, evitando
 * condiciones de carrera. El patrón es siempre el mismo: bloquear antes
 * de acceder con pthread_mutex_lock() y desbloquear después con
 * pthread_mutex_unlock().
 */

#include <stdio.h>
#include <pthread.h>

int counter = 0;
pthread_mutex_t lock;

void *task(void *arg)
{
    for (int i = 0; i < 1000; i++) {
        pthread_mutex_lock(&lock);   /* entrar en sección crítica */
        counter++;
        pthread_mutex_unlock(&lock); /* salir de sección crítica */
    }
    return NULL;
}

int main(void)
{
    pthread_t t1, t2;

    /* lock:        dirección del mutex
     * attr=NULL:   usar atributos por defecto (mutex estándar)
     */
    pthread_mutex_init(&lock, NULL); 

    pthread_create(&t1, NULL, task, NULL);
    pthread_create(&t2, NULL, task, NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    printf("counter=%d\n", counter);

    return 0;
}