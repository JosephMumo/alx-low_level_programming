#include <stdio.h>

/**
 * main - prints numbers separated by a comma,
 * Return: 0 if executed properly
 */
int main(void)
{
	int x, y;

	for (x = 48; x <= 56; x++)
	{
		for (y = 49; y <= 57; y++)
		{
			putchar(x);
			putchar(y);
			if (x != 56 || y != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
