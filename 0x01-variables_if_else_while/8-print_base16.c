#include <stdio.h>

/**
 * main - prins base 16 numbers'
 * Return: 0 if executed successfully
 */
int main(void)
{
	int x;
	char xy;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	for (xy = 'a'; xy <= 'f'; xy++)
	{
		putchar(xy);
	}
	putchar('\n');
	return (0);
}
