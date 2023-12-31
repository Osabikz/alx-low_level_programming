#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]);
void *error_file(int file_from, int file_to, char *argv[]);

/**
 * error_file - checks if a file is opened and handle errors
 * @file_to: destination file
 * @file_from: initial file to copy
 * @argv: argument parameter
 * Return: no return
 */

void *error_file(int file_from, int file_to, char *argv[])
{

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
	return (0);
}

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: the array of pointers
 * Return: 0
 * Description: if file_to or file_from cannot be closed - exit code 100
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(file_to, buf, nchars);
			if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
