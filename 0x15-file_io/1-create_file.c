#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it's a success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int letters;
	int rw;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	for (letters = 0; text_content[letters]; letters++);

	rw = write(file, text_content, letters);

	if (rw == -1)
		return (-1);

	close(file);

	return (1);
}
