#include <stdio.h>
/**
 * main - print numbers
 * @argc: number command line
 * @argv: array containing the argument
 * Return: 0 success
 */
int main(int argc, char  *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
