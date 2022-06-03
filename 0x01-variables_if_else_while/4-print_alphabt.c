#include <stdio.h>

/**
 * main - print all alphabets except e and q
 * Return: 0 if executed successfull
 */
int main(void)
{
	char xy = 'a';

	while (xy <= 'z')
	{
		if (xy != 'e' && xy != 'q')
		{
			putchar(xy);
		}
		xy++;
	}
	putchar('\n');
	return (0);
}
