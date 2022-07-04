#include "dog.h"
/**
 * init_dog - initializes a variable
 * @d: pointer to dog struct
 * @name: name to set
 * @age: age to set
 * @owner: to set
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
