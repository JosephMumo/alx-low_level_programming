#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: pointer to the string
 * Return: nothing to return here
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
