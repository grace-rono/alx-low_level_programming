#include "main.h"
/**
 *_memset - used to set a block of memory with a particular value
 *@s: memory block to be filled
 *@b: value to be set
 *@n: number of bytes to be set
 *Return: returns the value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);


}
