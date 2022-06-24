#include <stdio.h>
/**
 * main - print all arguments its receives
 * @argc: args n
 * @argv: arr args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
