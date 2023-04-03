
#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s:first occurrence in the string
 *
 * @accept: matches one of the bytes, or @NULL if no such byte
 *
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int l;
		while (*s)
		{
			for (l = 0; accept[l]; l++)
			{
				if (*s == accept[l])
					return (s);
			}
			s++;
		}
	return (NULL);
}
