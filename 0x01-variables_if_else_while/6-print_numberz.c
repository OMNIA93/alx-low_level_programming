#include <stdio.h>

/**
 * main - display all numbers from 0 to 9 using putchar
 * Return: return 0 and exit the program.
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
