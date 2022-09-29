#include "main.h"

/**
 * _pow_recursion - prints x raised to power y
 *
 * @x: params
 * @y: params
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	res *= (_pow_recursion(x, y - 1));
	return (res);
}
