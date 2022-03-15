#include "main.h"

/**
 * _abs - computes the absolute value on an integer
 * @n: the number to compute
 * Return: The absolute value
 */
int _abs(int n)
{
	int result;

	if (n < 0)
	{
		result = n * -1;
	}
	else
	{
		result = n;
	}
	return (result);
}
