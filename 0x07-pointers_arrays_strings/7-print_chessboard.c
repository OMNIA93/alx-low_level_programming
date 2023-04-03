#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to pieces to print
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int l, f;

	for (l = 0; l < 8; l++)
	{
		for (f = 0; f < 8; f++)
		{
			_putchar(a[l][f]);
		}
		_putchar('\n');
	}
}
