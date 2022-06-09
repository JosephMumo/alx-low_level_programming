#include "main.h"

/**
 * more_numbers - prints numbers 10 times
 * Return: Nothing to return here
 */
void more_numbers(void)
{
	int x;
	int y;

	for (x = '0'; x <= '10'; x++)
	{
		for (y = '0'; y <= '14'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
