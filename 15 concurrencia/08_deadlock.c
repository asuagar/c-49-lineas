/* deadlock
 *
 * Un interbloqueo (deadlock) ocurre cuando dos o más hilos quedan
 * bloqueados de forma permanente porque cada uno espera un recurso
 * que posee otro hilo. Ninguno puede continuar y el sistema queda
 * detenido en ese punto. Este problema aparece cuando se adquieren
 *  varios mutex en distinto orden. 
 */

#include <pthread.h>
#include <unistd.h> /* sleep(time_in_seconds) */

/* forma alternativa de incializar los mutex */
pthread_mutex_t m1 = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t m2 = PTHREAD_MUTEX_INITIALIZER;

void *t1(void *arg)
{
    pthread_mutex_lock(&m1);
    pthread_mutex_lock(&m2);   /* posible espera */
    printf("task1 \n");
    pthread_mutex_unlock(&m2);
    pthread_mutex_unlock(&m1);
    return NULL;
}

void *t2(void *arg)
{
    pthread_mutex_lock(&m2);
    pthread_mutex_lock(&m1);   /* posible espera */
    sleep(1);
    pthread_mutex_unlock(&m1);
    pthread_mutex_unlock(&m2);
    return NULL;
}

int main(void)
{
    pthread_t a, b;
    pthread_create(&a, NULL, t1, NULL);
    pthread_create(&b, NULL, t2, NULL);
    pthread_join(a, NULL);
    pthread_join(b, NULL);
    return 0;
}