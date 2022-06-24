#include "main.h"

/**
 * main - prints the name
 * @argc: offset count
 * @argv: offset value
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
