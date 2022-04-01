#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by src
 * @dest: pointer to the buffer in which we copy the string
 * @src: String to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
