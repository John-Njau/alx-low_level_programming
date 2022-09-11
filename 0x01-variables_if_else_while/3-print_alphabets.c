#include <stdio.h>

/**
 * Main : Entry point
 * Fn: prints the alphabet in lowercase, and then in uppercase
 * returns success
 */
int main(void)
{
    char i;
    for (i = 'a'; i <= 'z'; i++)
    {
        putchar(i);
    }
    for (i = 'A'; i <= 'Z'; i++)
    {
        putchar(i);
    }
    putchar('\n');
    return (0);
}