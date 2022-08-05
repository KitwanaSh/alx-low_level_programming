#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print all kind of data type
 * @format: list of arguments passed to the function
 *
 * Return: Every kind of data type
 */
void print_all(const char * const format, ...)
{
	va_list ev;
	unsigned int i = 0;
	char *str;

	va_start(ev, format);

	while (format && format[i])
	{
		if (i && (format[i] == 'c' || format[i] == 'i' ||
			format[i] == 'f' || format[i] == 's'))
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ev, int));
				break;
			case 'i':
				printf("%d", va_arg(ev, int));
				break;
			case 'f':
				printf("%f", va_arg(ev, double));
				break;
			case 's':
				str = va_arg(ev, char *);

				printf("%s", str);
				if (str == NULL)
					printf("(nil)");
				break;
			default:
				break;
		}
		i++;
	}

	va_end(ev);

	printf("\n");
}
