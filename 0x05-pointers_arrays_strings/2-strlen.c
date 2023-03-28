#include "main.h"

/**
 * _strlen - counts the lenght of a string
 *@s: string length to be printed
 * Return: returns count
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

for (i = 0; s[i] != '\0'; i++)
{
	count++;
}
return (count);
}
