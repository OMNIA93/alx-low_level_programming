#include <stdio.h>
#include <unistd.h>

/**
 * main - display "and that piece of art is useful" in console
 * and with a new line after it
 * Return: 1 and exit the program
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
