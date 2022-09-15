#include "main.h"


/**
 * print_last_digit - prints last digit of a number
 *
 * @n: value of integer
 *
 * Return: success
 */

int print_last_digit(int n)
{
int last_Digit = n % 10;

if (last_Digit < 0)

last_Digit *= -1;

_putchar(last_Digit + '0');
return (last_Digit);


}
