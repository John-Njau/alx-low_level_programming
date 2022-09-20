#include "main.h"
#include <string.h>

/**
 * _strlen - gets the length of a string
 *
 * @s: char
 * Return: length of string
 */

size_t _strlen(const char *s)
{
size_t length = 0;

while (*s++)
length++;

return (length);
}
