#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: the longer string to search
 * @needle: the first occurrence of the substring
 *
 * Return: a pointer beg of substring or @Null if it not foound.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int l = 0, f = 0;

	while (haystack[l])
	{
		while (needle[f] && (haystack[l] == needle[0]))
		{
			if (haystack[l + f] == needle[f])
				f++;
			else
				break;
		}
		if (needle[f])
		{
			l++;
			f = 0;
		}
		else
			return (haystack + l);
	}
	return (0);
}
