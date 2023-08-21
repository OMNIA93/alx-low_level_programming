#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: pointer to memery are to be pasted.
 * @src: source buffer to be coppied.
 * @n: number of bytes from the memory area.
 * Return: a pointer to destination buffer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
