#include "main.h"

/**
 * swap_int - swaps the given ints
 *
 * @a: int a
 * @b: int b
 *
*/

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
