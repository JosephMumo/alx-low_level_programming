#include "main.h"

/**
 * print_line - prints line
 * @n: parameter used
 * Return: nothing to return here
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (; x < n; n++)
			_putchar('_');
	}
	_putchar('\n');
}
