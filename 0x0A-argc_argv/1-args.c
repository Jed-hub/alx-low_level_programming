#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of arguments passed
 * into the program
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	if (argv)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
