#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -  allocates memory using malloc.
 * @b: memory allocated
 * @t: pointer to memory
 * Return: a pointer to the allocated memory or 98 if malloc is unsucceful
 */

void *malloc_checked(unsigned int b)
{
	int *t;

		t = malloc(b);

	if (b == 0)
		exit(98);

	return (t);
}
