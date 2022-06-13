#include "main.h"

/**
 * _strlen - gives the length of a given string
 * @s: some useless character
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
