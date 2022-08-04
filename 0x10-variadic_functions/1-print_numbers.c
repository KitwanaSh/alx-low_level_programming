#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - print numbers function
 * @separator: the sting to be print between numbers
 * @n: number of integers to passed in the funtion
 *
 * Return: numbers separated by a separator
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nu;
	unsigned int i;

	va_start(nu, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nu, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nu);
}
