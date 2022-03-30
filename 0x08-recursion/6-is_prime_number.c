#include "main.h"

/**
 * check - checks if the number is a prime number.
 * @g: guess at sqrt
 * @c: the number
 *
 * Return: 1 if integer is a prime number
 * 0 otherwise
 */

int check(int g, int c)
{
	if (c < 0)
	{
		if (g * g * (-1) == c)
		{
			return (0);
		}
		if (g * g * (-1) > c)
		{
			return (1);
		}
		return (check(g + 1, c));
	}
	else
	{
		if ((g * g) == c)
		{
			return (0);
		}
		if ((g * g) > c)
		{
			return (1);
		}
		return (check(g + 1, c));
	}
}

/**
 * is_prime_number - Returns 1 if the number is a prime number
 * and 0 otherwise
 * @n: the number
 *
 * Return: The result
 */

int is_prime_number(int n)
{
	return (check(1, n));
}
