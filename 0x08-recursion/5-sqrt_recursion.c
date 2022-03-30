#include "main.h"

/**
 * check - checks for the square root of c.
 * @g: guess at sqrt
 * @c: number to check
 *
 * Return: -1 or sqrt of c.
 */

int check(int g, int c)
{
	if (g * g == c)
	{
		return (g);
	}
	if (g * g > c)
	{
		return (-1);
	}
	return (check(g + 1, c));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number
 *
 * Return: The result.
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}

	return (check(1, n));
}
