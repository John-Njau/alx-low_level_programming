#include "main.h"
#include <stdio.h>


/**
 * _isdigit - checks whether c is uppercase
 *
 * @c: param c
 * Return: 0 or 1
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}

