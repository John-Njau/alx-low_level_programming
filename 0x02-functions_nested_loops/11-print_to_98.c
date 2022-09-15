#include "main.h"
#include <stdio.h>

/**
* main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
print_to_98(0);
print_to_98(98);
print_to_98(111);
print_to_98(81);
print_to_98(-10);
return (0);
}

voidprint_to_98(int n)
{

if (n >= 98)
{
while (n > 98)
{
printf("%d,", n--);
}
printf("%d\n", n);
}
else
{
while (n < 98)
{
printf("%d,", n++);
}
printf("%d\n", n);
}
}
