#include <stdio.h>

/**
 * main - prints characters a to z,
 * Return: 0 if executed successfully
 */
int main(void)
{
	char xy;

	for (xy = 'a'; xy <= 'z'; xy++)
	{
		putchar(xy);
	}
	putchar('\n');
	return (0);
}
