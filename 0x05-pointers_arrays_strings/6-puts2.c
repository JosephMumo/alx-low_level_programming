#include "main.h"

/**
 * puts2 - print alternating stings
 * @str: strring
 * Return: void
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
