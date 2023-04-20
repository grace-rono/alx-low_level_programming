#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * print_strings - prints all strings
 * @separator: seperates strings
 * @n: number of strings
 * @...: length
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list strings;

	unsigned int i;

	char *str;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(strings, char *);

	if (strings != NULL)
	printf("%s", str);
	else
	printf("(nil)");

	if (i < n && separator != NULL)
	printf("%s", separator);
	}

	printf("\n");
	va_end(strings);
}
