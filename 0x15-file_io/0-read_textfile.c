#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: text file being read
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;

	ssize_t fd;

	ssize_t r;

	ssize_t w;


	fd = open(filename, O_RDONLY);

	if (fd == -1)

		return (0);

	buf = malloc(sizeof(char) * letters);

	r = read(fd, buf, letters);

	w = write(STDOUT_FILENO, buf, r);


	free(buf);

	close(fd);

	return (w);
}
