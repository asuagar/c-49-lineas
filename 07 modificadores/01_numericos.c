/* 
 * modificadores numéricos
 *
 * C se escribió originalmente para máquinas de 16 bits, en las que el tamaño 
 * de entero más rápido y conveniente era de 16 bits. Ese era el tipo int original. 
 * En ocasiones, los programadores necesitaban números de 32 bits, por lo que 
 * esos números se representaban mediante el tipo long int.
 * 
 * Con el tiempo, C se portó a máquinas de 32 bits, cuyo tamaño de palabra más 
 * conveniente era de 32 bits. Se quería seguir utilizando int para referirse al 
 * tamaño de palabra nativo porque, por ejemplo, prácticamente todos los programas C
 * reales contienen en algún lugar una declaración como int i;. Sin embargo, a veces 
 * también era necesario utilizar números de 16 bits para ahorrar espacio. 
 * Por ello se introdujo el tipo short int.
 *
 * Pasó el tiempo y C tuvo que adaptarse a máquinas de 64 bits. Para entonces 
 * ya existían muchos programas que suponían que long tenía exactamente 32 bits. 
 * Además, por desgracia, también había muchos programas que suponían que long 
 * tenía el mismo tamaño que un puntero, una dirección IPv4, una marca de tiempo, etc.
 *
 * Como consecuencia de que los tipos se utilizaran para representar conceptos 
 * contradictorios, los compiladores actuales permiten elegir entre que long tenga 
 * 32 o 64 bits. Solo se pueden hacer las siguientes suposiciones: int tiene
 * como mínimo 16 bits y long tiene como mínimo 32 bits.
 * 
 * El código bien diseñado utiliza en su lugar tipos como size_t, uintptr_t y off_t. 
 * Desde la aparición de C99 existen además tipos como int32_t en la biblioteca estándar 
 * para especificar tamaños exactos. 
 * 
 */

#include <stdio.h>

int main(void)
{
	/* admite valores positivos y negativos */
	signed int saldo = -3;
	/* admite solo valores positivos, por tanto almacena cifras mayores */
	unsigned int visitas = 3U;
	/* long tiene al menos 32 bits */
	long int distancia = 100000L;
	/* short tiene como mínimo 16 bits */
	short int temperatura = -2;
	
	printf("bytes: %zu %zu %zu %zu\n", sizeof saldo, sizeof visitas,
	       sizeof temperatura, sizeof distancia);
	return 0;
}
