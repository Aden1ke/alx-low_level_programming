#include "main.h"
/**
 * create_file - Create a function that creates a file.
 * @filename: the filename or path of the file to be read.
 * @text_content: number of characters to be read from the file
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written = 0;
	size_t text_len = 0;

	if (filename == NULL)
		return (0);
	if (text_content != NULL)
	{
		while (text_content[text_len] != '\0')
		{
			text_len++;
		}
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (0);
	if (text_len > 0)
	{
		bytes_written = write(fd, text_content, text_len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
