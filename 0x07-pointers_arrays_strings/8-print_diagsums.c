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
	int l, f, c, g = 0, h = 0;

	for (l = 0; l < size; l++)
	{
		c = (l * size) + l;
		l += *(a + c);
	}
	for (f = 0; f < size; f++)
	{
		c = (f * size) + (size - 1 - f);
		h += *(a + c);
	}
	printf("%i, %i\n", g, h);
}
