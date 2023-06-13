#include "main.h"

/**
  * append_text_to_file - Entry point
  * Description - 'appends text at the end of a file'
  * @filename: a pinter that points to the name of the file
  * @text_content: the string to be added to the file
  * Return: -1 if the function fails or filename is NULL, if the file
  * does not exist, the user lacks write permissions -1, and 1 if otherwise
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	w = write(op, text_content, len);

	if (op == -1 || w == -1)
		return (-1);

	close(op);

	return (1);
}

