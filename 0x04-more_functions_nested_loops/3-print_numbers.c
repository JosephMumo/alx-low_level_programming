#include "main.h"

/**
 * print_numbers - prints 0 to 9
 *
 * Return: nothing to return here
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
