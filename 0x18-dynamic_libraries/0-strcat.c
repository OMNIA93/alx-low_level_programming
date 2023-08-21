#include "main.h"
/**
 * _strcat -  concatenates two strings.
 * @dest: string to be concatenated
 * @src: string to be concatenated
 * Return: the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len] != '\0')
		len++;

	for (i = 0; src[i] != '\0'; i++)
		dest[len++] = src[i];

	return (dest);
}
