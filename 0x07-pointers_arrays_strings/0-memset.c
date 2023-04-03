#include <stdio.h>
#include "main.h"
/**
  *_memset - fills the first n bytes of the memory area pointed to by s
  *@n: number of bytes
  *@b: constant byte
  *@s: destination pointed
  *Return: returns a pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}
