#include "main.h"

/**
 * print_rev - prints the string in reverse
 * @s: some useless integer
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (str[i] != '\0' && str[i] < '\0')
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
