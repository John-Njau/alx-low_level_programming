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
 * print_numbers - Prints the numbers from 0-9.
 */
void print_numbers(void)
{
int num;

for (num = 0; num <= 9; num++)
_putchar((num % 10) + '0');

_putchar('\n');
}

