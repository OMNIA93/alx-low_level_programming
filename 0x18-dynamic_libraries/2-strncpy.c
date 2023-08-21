#include "main.h"
/**
 * _strncpy - copies a string.
 * @dest:  pointer to the destination array.
 * @src: string to be copied.
 * @n: number of characters to be copied.
 * Return: pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
