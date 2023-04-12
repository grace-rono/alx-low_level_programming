#include "main.h"
/**
 * create_array - creates arrays of char
 * @c: initialising character
 * @size: size of integer
 * Return: returns null if size = 0
 */
char *create_array(unsigned int size, char c)

{
	if (size == 0)
	{
		return (NULL);
	}
	char *arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		arr[i] = c
	}
	return (arr);
}
