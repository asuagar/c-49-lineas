/*
 * asignación compuesta
 *
 * En C, el operador '=' se utiliza para asignar un valor a una variable.
 * Sin embargo, existen formas abreviadas que combinan una operación y
 * una asignación en una sola expresión.
 *
 * Por ejemplo, la expresión "a = a + 5" puede escribirse como "a += 5".
 * Estas formas se llaman operadores de asignación compuesta y hacen el
 * código más conciso.
 *
 * Los más habituales son +=, -=, *=, /= y %=, que se corresponden con
 * las operaciones aritméticas básicas.
 */

#include <stdio.h>

int main()
{
    int level = 10;

    level += 5;  /* equivalente a level = level + 5 */
    printf("level += 5 -> %d\n", level);

    level -= 3;  /* equivalente a level = level - 3 */
    printf("level -= 3 -> %d\n", level);

    level *= 2;  /* equivalente a level = level * 2 */
    printf("level *= 2 -> %d\n", level);

    level /= 4;  /* equivalente a level = level / 4 */
    printf("level /= 4 -> %d\n", level);

    level %= 3;  /* equivalente a level = level %% 3 */
    printf("level = level % 3 -> %d\n", level);

    return 0;
}
