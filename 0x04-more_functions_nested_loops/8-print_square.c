#include "main.h"

/**
 * print_square - prints a square of #
 *
 * @size: size of the square
 */

void print_square(int size)
{
int len, space;

if (size > 0)
{
for (len = 0; len < size; len++)
{
for (space = 0; space < size; space++)
_putchar('#');

if (len == size - 1)
continue;
_putchar('\n');
}
}

_putchar('\n');
}

