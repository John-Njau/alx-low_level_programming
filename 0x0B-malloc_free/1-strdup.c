#include "main.h"
#include <stdlib.h>

/**
 * _strdup - string
 *
 * @str: string
 * Return: Returns a pointer to a newly allocated space
 */

char *_strdup(char *str)
{
	char *strout;
	unsigned int i, n;

	if (str == NULL)
		return (NULL);

	if (strout == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	;

	strout = (char *)malloc(sizeof(char) * (i + 1));

	if (strout == NULL)
		return (NULL);

	for (n = 0; n <= i; n++)
		strout[n] = str[n];

	return (strout);
}
