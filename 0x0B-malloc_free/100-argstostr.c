#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program into a string
 * @ac: The number of arguments passed to the program
 * @av: An array of pointers to the arguments.
 *
 * Return: The  result
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int arg, b, i, size = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (arg = 0; arg < ac; arg ++)
	{
		for (b = 0; av[arg][b]; b++)
		{
			size++;
		}
	}

	str = malloc(sizeof(char) * size +1);

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (b = 0; av[arg][b]; b++)
		{
			str[i++] = av[arg][b];
		}
		str[i++] = '\n';
	}

	str[size] = '\0';
	return (str);
}
