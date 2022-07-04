#include <stdio.h>
#include "main.h"

/**
 * print_dog - prints struct dog
 * @d: a pointer to dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	if (d == NULL)
		return;
	printf("Name: %s\n", (d->name) ? d->name : nil);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner) ? d->owner : nil);
}
