#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches the string for any number of bytes
 * @s: pointer to the param
 * @accept: pointer to char
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
