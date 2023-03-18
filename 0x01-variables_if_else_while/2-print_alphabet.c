#include <stdio.h>

/**
 * main - starts the alphabet game
 * Return: return 0 and exit the program
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
