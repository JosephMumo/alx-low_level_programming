#include <stdio.h>

/**
 * main - prints alpabet letters in reverse,
 * Return: 0 if executed successfully
 */
int main(void)
{

	char xy;

	for (xy = 'z'; xy >= 'a'; xy--)
	{
		putchar(xy);
	}
	putchar('\n');
	return (0);
}
