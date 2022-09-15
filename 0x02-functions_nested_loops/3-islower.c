#include "main.h"

/**
 * _islower - returns 0 if uppercase and 1 if otherwise
 *
 * @c: int value
 * Return: 0 or 1
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
