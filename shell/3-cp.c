#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can open.
 * @read_from: read_from.
 * @read_to: read_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int read_from, int read_to, char *argv[])
{
	if (read_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (read_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code if the code is correct.
 * @argc: arguments length.
 * @argv: arguments needed.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int read_from, read_to, err_close;
	ssize_t num_chars, num_write;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	read_from = open(argv[1], O_RDONLY);
	read_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(read_from, read_to, argv);
	num_chars = 1024;
	while (num_chars == 1024)
	{
		num_chars = read(read_from, buffer, 1024);
		if (num_chars == -1)
			error_file(-1, 0, argv);
		num_write = write(read_to, buffer, num_chars);
		if (num_write == -1)
			error_file(0, -1, argv);
	}
	err_close = close(read_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", read_from);
		exit(100);
	}
	err_close = close(read_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", read_from);
		exit(100);
	}
	return (0);
}
