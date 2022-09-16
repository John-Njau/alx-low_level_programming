#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_numbers();
return (0);
}

/**
 * print_numbers - prints 0 to 9
 *
 */


void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
_putchar((i % 10) + '0');
}
_putchar('\n');
}

