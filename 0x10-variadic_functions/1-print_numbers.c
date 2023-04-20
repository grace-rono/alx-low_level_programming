#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - prints numbers followed by new line
 * @separator: separates the numbers
 * @n: number of integers
 * @...: variables
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;

	unsigned int i;

	va_start(numbers, n);
	for (i = 0; i <  n; i++)
	{
		printf("%d", va_arg(numbers, int));

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);

}
