#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file.
 *
 * @filename: name of the file to create.
 * @text_content: NULL terminated string to write to a file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)

{
	int file, len, closed;
	mode_t mode = S_IRUSR | S_IWUSR;

	len = 0;
	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		write(file, text_content, len);
	}
	closed = close(file);
	if (closed == -1)
		return (-1);
	return (1);
}
