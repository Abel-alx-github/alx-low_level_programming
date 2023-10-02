#include "main.h"

/**
 * append_text_to_file - Appends characther at the end of a file.
 * @filename: A pointer to the file.
 * @text_content: String to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len_char = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len_char = 0; text_content[len_char];)
			len_char++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(o);

	return (1);
}
