#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 * Return: nothing if executed successfully
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
