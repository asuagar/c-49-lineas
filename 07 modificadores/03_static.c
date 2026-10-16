/* 
 * static
 *
 * El efecto de static depende del lugar donde se utiliza.
 * 
 * Cuando se aplica a variables o funciones globales, limita su visibilidad 
 * al fichero donde se declaran. Esto se conoce como "enlace interno"
 * (internal linkage). Actúa como un mecanismo de encapsulación: se mantienen
 * privadas funciones auxiliares y datos internos. Así se evita el acceso desde
 * otros ficheros, se reducen las colisiones de nombres y se facilita el 
 * mantenimiento de programas divididos en varios ficheros.
 *
 * Cuando static se aplica a una variable dentro de un bloque, la
 * variable conserva su ámbito de bloque, pero tiene duración de
 * almacenamiento estática: se inicializa una vez y conserva su valor
 * entre llamadas a la función.
 * 
 */

 #include <stdio.h>

/* solo visible en este fichero */
/* se evita colisión con variable mismo nombre en otros ficheros */
static int counter = 0;

/* solo visible en este fichero */
/* se evita colisión con función de mismo nombre en otros ficheros */
static void hello(void)
{
    printf("Hello World!\n");
}

/* variable local con duración estática */
void show_increment(void)
{
    static int calls = 0;  /* persiste entre llamadas */
    calls++;
    printf("calls=%d\n", calls);
}

int main(void)
{
    show_increment();
    show_increment();

    return 0;
}