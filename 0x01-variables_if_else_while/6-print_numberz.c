#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: print 0-9
 */

int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar((i % 10) + '0');
}
putchar('\n');
return (0);
}
