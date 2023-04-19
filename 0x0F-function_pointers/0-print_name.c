#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints the name
 * @f: pointer to name
 * @name: name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
