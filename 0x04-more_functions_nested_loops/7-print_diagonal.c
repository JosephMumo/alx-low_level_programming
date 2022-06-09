#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: parameter used
 * Return: Nothing to return here
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('/');
	}
	_putchar('\n');
}
