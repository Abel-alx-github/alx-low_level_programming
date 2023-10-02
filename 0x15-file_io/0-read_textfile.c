#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: input file being read
 * @letters: number of characters to be read
 * Return: num- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fp;
	ssize_t num;
	ssize_t t;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fp, buffer, letters);
	num = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fp);
	return (num);
}

