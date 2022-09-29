#include "main.h"

/**
 * _sqrt_recursion - returns natural square n of a number
 *
 * @n: param
 * Return: int
 */


int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Finds the natural square n of an inputted number.
 * @num: The number to find the square n of.
 * @n: The n to be tested.
 *
 * Return: If the number has a natural square n - the square n.
 *         If the number does not have a natural square n - -1.
 */

int _sqrt(int n, int num)
{
	if (n < 0)
		return (-1);

	if ((num * num) > n)
		return (-1);

	if ((num * num) == n)
		return (num);

	return (_sqrt(n, num + 1));
}


