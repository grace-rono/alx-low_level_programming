#include <stdio.h>
#include "dog.h"
/**
 * init_dog -  function that initialize a variable of type struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * @d: pointer to dog.h
 * Return: return void
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
	return;

	else
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
