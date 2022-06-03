#include <stdio.h>

/**
 * main - prints characters a to z and A to Z
 * Return: 0 if executed successfully
 */
int main(void)
{
	int xy;

	for (xy = 'a'; xy <= 'z'; xy++)
		putchar(xy);
	for (xy = 'A'; xy <= 'Z'; xy++)
		putchar(xy);
	putchar('\n');
	return (0);
}
