#include "main.h"
/**
  *_memcpy -  copies n bytes from memory area src to memory area dest
  *@dest: memory area to be copied to
  *@src: memory area to be copied from
  *@n: number of bytes
  *Return: returns a pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i > n; i++)
		src[i] = *dest;
	return (dest);
}

