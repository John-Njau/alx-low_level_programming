#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: All letters except q and e
 */

int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
return (0);
}
