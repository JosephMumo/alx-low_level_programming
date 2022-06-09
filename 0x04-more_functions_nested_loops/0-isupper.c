#include "main.h"

/**
 * _isupper - determines if a number is in uppercase
 * @c: character to check
 * Return: 0 is uppercase otherwise 1
 */
int _isupper(int c);
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
