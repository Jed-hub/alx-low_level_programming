#include "main.h"

/**
 * _abs - computes the absolute value on an integer
 * @n: the number to compute
 * Return: The absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
