#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void close_file(int fd);
char *create_buffer(char *file);

/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @file: the name of the file buffer
 * Return: a pointer to the newly buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: can't write to %s\n", file);
		exit(98);
	}

	return (buffer);
}

/**
 * close_file - closes file descriptors
 * @fd: the file descriptor
 */

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: the array of pointers
 * Return: 0
 * Description: if the argument count is incorrect exit codee 97
 * if file_from does not exit or cannot be read exit code 98
 * if file_to cannot be created or written exit code 99
 * if file_to or file_from cannot be closed exit code 100
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
