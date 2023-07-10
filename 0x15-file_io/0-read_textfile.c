#include "main.h"
#include <stdlib.h>

/**
  * read_textfile - Entry point
  * Description - 'reads a text file and prints it to the
  *                POSIX standard output'
  * @filename: file being read
  * @letters: number of letters to be read and printed out
  * Return: w, the actual number of bytes read and printed or
  * 0 when the function fails or filename is 0
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t r;
	ssize_t w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(fd);
	return (w);
}
