#include "function_pointers.h"

/**
 * int_index - finds an int
 * @array: pointer
 * @size: of the array
 * @cmp: to the funct to use to compare values
 * Return: the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int loc, flag = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (loc = 0; loc < size; loc++)
	{
		flag = cmp(array[loc]);
		if (flag != 0)
			return (loc);
	}
	return (-1);
}
