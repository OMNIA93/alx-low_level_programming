#include "main.h"

int _strlen(char *str);

/**
 * str_concat - concat two strings
 * @s1: string one
 * @s2: string two
 * Return: concatenated string or null in the failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *temp;
	int len1, len2, i, index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	temp = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (temp == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		temp[index++] = s1[i];
	for (i = 0; i < len2; i++)
		temp[index++] = s2[i];
	temp[len1 + len2 + 1] = '\0';
	return (temp);
}

/**
 * _strlen - calculate string length.
 * @str: string
 * Return: string length.
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
