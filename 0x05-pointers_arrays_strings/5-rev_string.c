#include "main.h"

/**
 * rev_string - Reverses a string
 * s: Array of string to reverse
 */
void rev_string(char *s)
{
	char c;
	int i, j, len;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i - 1;
	for (j = 0; j < len / 2; j++)
	{
		c = s[j];
		s[j] = s[len];
		s[len--] = c;
	}
}
