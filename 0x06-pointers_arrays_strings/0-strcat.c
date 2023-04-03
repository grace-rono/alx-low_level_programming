#include "main.h"
/**
 * _strcat - concatenates two strind
 * @dest: takes in string
 * @src: takes in string
 *
 * Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)

{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;


	while (src[j] != '\0')
		dest[i++] = src[j++];

	dest[i] = '\0';
	return (dest);
}
