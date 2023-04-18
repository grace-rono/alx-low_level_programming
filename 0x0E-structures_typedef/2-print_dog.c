#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: pointer to d
 * Return: return nothing
 */

void print_dog(struct dog *d)
{
	{
		if (d == NULL)
			return;
	}
	if
		(d->name == NULL)
		printf("name: (nil)\n");
	else
		  printf("name: %s\n", d->name);
	if
		(d->age == 0)
		printf("age: (nil)\n");
	else
		printf("age: %f\n", d->age);
	if
		(d->owner == 0)
		printf("owner: (nil)\n");

	else
		printf("owner: %s\n", d->owner);
}
