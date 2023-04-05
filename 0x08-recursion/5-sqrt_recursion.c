
#include "main.h"

/**
 * check - checks for the square root
 * @h:int
 * @d:int
 *
 * Return: int
 */
int check(int h, int d)
{
	if (h * h == d)
		return (h);
	if (h * h > d)
		return (-1);
	return (check(h + 1, d));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
