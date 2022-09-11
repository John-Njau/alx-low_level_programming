#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Assigns a random variable n each time it is executed
 */

int main(void)
{
for (int i = 'A'; i <= 'z'; i++)
{
putchar(tolower(i));
}
return (0);
}
