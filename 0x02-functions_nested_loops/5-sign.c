#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of the int value
 *
 * @n : int value
 * Return: either 0, -1 or 1
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
