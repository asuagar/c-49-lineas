/*
 * pthread_create
 *
 * En C, el uso de hilos suele realizarse mediante la biblioteca POSIX
 * threads (pthreads), definida por el estándar POSIX y ampliamente
 * disponible en sistemas tipo Unix (Linux, macOS). El estándar C11
 * introdujo su propia API de hilos en <threads.h>, con el objetivo de
 * ofrecer una solución portable. Sin embargo, su adopción es desigual 
 * según plataforma, por lo que pthreads sigue siendo más usado.
 *
 * int pthread_create(pthread_t *thread,
 *                    const pthread_attr_t *attr,
 *                    void *(*start_routine)(void *),
 *                    void *arg);
 *
 * - thread: dirección donde se almacena el identificador del hilo
 * - attr: atributos del hilo (NULL = valores por defecto)
 * - start_routine: función que ejecutará el hilo
 * - arg: argumento que se pasa a la función (NULL = void)
 * 
 * Para compilar, hay que enlazar con librería pthread:
 * cc program.c -o program -pthread
 */

#include <stdio.h>
#include <pthread.h>

/* tarea que se ejecutará en su propio hilo*/
void *task(void *arg)
{
    const char *name = arg;
    /* pthread_self obtiene identificador del hilo actual*/
    printf("thread %s id: %lu\n", name, (unsigned long)pthread_self());
    return NULL;
}

int main(void)
{
    pthread_t tid; 

    /* pthread_create devuelve 0 si el hilo no se crea correctamente */
    int pid = pthread_create(&tid, NULL, task, "worker");
    if (pid != 0) {
        printf("error creating thread\n");
        return 1;
    }

    return 0;
}