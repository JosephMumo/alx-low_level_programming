#include "main.h"

/**
 * _strspn - gets the prefix of the substring
 * @s: pointer to the param
 * @accept: substring of accepted chars
 * Return: length of occurrence
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
