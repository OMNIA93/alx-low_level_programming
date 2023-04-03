#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int l, f, c, l = 0, r = 0;

	for (l = 0; l < size; l++)
	{
		c = (l * size) + l;
		l += *(a + c);
	}
	for (f = 0; f < size; f++)
	{
		c = (f * size) + (size - 1 - f);
		r += *(a + c);
	}
	printf("%i, %i\n", l, r);
}
