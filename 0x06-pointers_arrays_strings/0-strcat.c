#include "main.h"

/**
 * *_strcat - concatenates the src to dest
 *
 * @dest: where the string is concatenated
 * @src: source
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;

for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];

return (dest);
}
