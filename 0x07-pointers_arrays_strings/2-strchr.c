#include "main.h"
/**
*_strchr - locates a character in a string
*@s: memory address of the string
*@c: character to be located
*Return: Pointer to first occurence oc or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
