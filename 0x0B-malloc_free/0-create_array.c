#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates arrays of char
 * @c: initialising character
 * @size: size of integer
 * Return: returns null if size = 0
 */
char *create_array(unsigned int size, char c)

{
	char *ch;
	unsigned int s;

	ch = malloc(sizeof(*ch) * size);

	if (size == 0)
	{
	return (NULL);
	}

	for (s = 0; s < size; s++)
		ch[s] = c;
	return (ch);


}
