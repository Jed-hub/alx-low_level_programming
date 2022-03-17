#include <stdio.h>

/**
 * main - Prints number from 1 to 100
 * but for multiple of three prints Fizz,
 * for multiple of five prints Buzz
 * and for both three and five prints FizzBuzz
 *
 * Return: 0.
 */
int main(void)
{
	int n;

	for (n = 1; n < 100; n++)
	{
		if (((n % 3) == 0) && ((n % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
