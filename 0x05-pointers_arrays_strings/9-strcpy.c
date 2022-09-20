#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 *
 * @dest: returned value
 * @src: pointer
 * Return: char*
 */

char *_strcpy(char *dest,const char *src)
{
int index = 0;
while (src[index])
{
dest[index] = src[index];
index++;
}

return (dest);

}
