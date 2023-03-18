#include <stdio.h>

/**
 * main - Prints the alphabet without q and e
 * Return: return 0 and exit the program
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}

	putchar('\n');
	return (0);
}
