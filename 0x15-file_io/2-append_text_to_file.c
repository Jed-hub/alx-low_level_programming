#include "main.h"

/**
 * _strlen - length of a string
 * @s: input char
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t n;
	int file;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		n = write(file, text_content, _strlen(text_content));
		if (n == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
