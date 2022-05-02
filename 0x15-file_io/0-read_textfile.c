#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file name
 * @letters: the number of letters
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t n;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);

	if (buf == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buf);
		return (0);
	}

	n = read(file, buf, sizeof(char) * letters);
	if (n == -1)
	{
		free(buf);
		close(file);
		return (0);
	}
	n = write(STDOUT_FILENO, buf, n);
	if (n == -1)
	{
		free(buf);
		close(file);
		return (0);
	}

	free(buf);
	close(file);

	return (n);
}
