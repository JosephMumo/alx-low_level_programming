#include "main.h"

/**
 * _strncpy - copies contents of a string
 * @dest: destination
 * @src: source
 * @n: amount of bytes from src
 * Return: pointer to the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
