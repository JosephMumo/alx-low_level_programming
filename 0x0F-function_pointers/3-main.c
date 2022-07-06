#include "3-calc.h"
/**
 * main - performs simple operations
 * @argc: number of arg
 * @argv: array of arg
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((p == op_div || p == op_mod) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", p(a, b));
	return (0);
}
