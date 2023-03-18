#include <stdio.h>

/**
 * main - display alphabet but reversed
 * Return: return 0 and exit the program
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
