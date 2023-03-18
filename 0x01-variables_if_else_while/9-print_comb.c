#include <stdio.h>

/**
 * main - display possible combinations of numbers
 * Return: return 0 and exit the program
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
