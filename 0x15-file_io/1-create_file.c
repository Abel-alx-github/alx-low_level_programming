#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: If the function fails - -1 otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fp, wr, len_char = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len_char = 0; text_content[len_char];)
			len_char++;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fp, text_content, len_char);

	if (fp == -1 || wr == -1)
		return (-1);

	close(fp);

	return (1);
}

