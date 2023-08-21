#include "main.h"
/**
 * _abs -  computes the absolute value of an integer.
 * @n: the integer to be computed.
 *
 * Return: abslute value of the input parameter.
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
