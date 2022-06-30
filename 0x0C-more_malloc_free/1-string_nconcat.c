#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns str len
 * @s: char pointer
 * Return: str len
 */
int _strlen(char *s)
{
	unsigned int len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}
/**
 * string_nconcat - concats 2 str
 * @s1: str 1
 * @s2: str 2
 * @n: bytes to concatenate
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = _strlen(s1);

	str = malloc((l1 + (n * sizeof(*s2) + 1)) * sizeof(*str));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '/0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0' && j < n; j++, i++)
	{
		str[i] = s2[j];
	}
	str[i] = '\0';
	return (str);
}
