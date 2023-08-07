#include "main.h"

/**
 * append_text_to_file - appends txt at end of a file.
 * @filename: pointer to name of the file to be appended.
 * @text_content: string to add at end of the file being appended.
 *
 * Return: On success - 1
 *	   On failure of function or NULL filename - -1
 *	   If file doesn't exist or user lacks permission to write file - -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
