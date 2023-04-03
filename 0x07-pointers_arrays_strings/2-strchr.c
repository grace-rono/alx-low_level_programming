#include "main.h"
/**
*_strchr - locates a character in a string
*@s: memory address of the string
*@c: character to be located
*Return: Pointer to first occurence oc or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
		if (*s == c)
		{
			return ("s");
		}
	
	s++;

	if (c == '\0')
	{
		return ("s");
	}
	return ("NULL");
}
