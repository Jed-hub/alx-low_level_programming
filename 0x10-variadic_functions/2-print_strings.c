#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings.
 * @separator: The string to be printed between the strings.
 * @n: the number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *m;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		m = va_arg(ap, char *);

		if (m == NULL)
			printf("nil");

		else
		{
			printf("%s", m);

			if (separator != NULL && i != (n - 1))
			{
				printf("%s", separator);
			}
		}

	}

	printf("\n");
}
