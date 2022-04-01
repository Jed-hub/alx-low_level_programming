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
	int i, m, sum = 0;

	/*if (argc < 1)
	{
		return (0);
	}*/

	for (i = 1; i < argc; i++)
	{
		for (m = 0; argv[i][m]; m++)
		{
		if (argv[i][m] < '0' || argv[i][m] > '9')
		{
			printf("Error\n");
			return (1);
		}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
