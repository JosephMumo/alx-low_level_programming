#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds +ve numbers
 * @argc: number of cmd argument
 * @argv: array containing the cmd argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(arg[i][j]))
			{
				printf("Error\n");
				return (0);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
