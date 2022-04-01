#include <stdlib.h>
#include <stdio.h>

/**
 * main - Adds positive numbers
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);

	}
	else
	{
		printf ("0\n");
	}
	return (0);
}
