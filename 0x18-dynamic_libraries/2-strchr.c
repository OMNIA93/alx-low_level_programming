#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: string.
 * @c: character to be located.
 * Return: pointer to the first occarance of c in s.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
