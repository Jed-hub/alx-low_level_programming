#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Prints numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int m;

	if (separator == NULL)
		return;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		m = va_arg(ap, int);
		if (i == n - 1)
			printf("%d", m);
		else
			printf("%d%s", m, separator);
	}
	printf("\n");
	va_end(ap);
}
