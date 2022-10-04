#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Create a array object
 *
 * @size: size of int
 * @c: array of chars
 * Return: char*
 */

char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	cr = malloc(sizeof(c) * size);

	if (size == 0)
		return (NULL);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);

}

