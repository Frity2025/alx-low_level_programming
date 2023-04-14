#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

char *file_create(char *file);
void file_close(int fd);

/**
 * file_create - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *file_create(char *file)
{
	char *ffile = malloc(sizeof(char) * 1024);

	if (ffile == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (ffile);
}

/**
 * file_close- Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void file_close(int fd)
{
	int value = close(fd);

	if (value == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int file_origin, file_destination, r, w;
	char *file;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file = file_create(argv[2]);
	file_origin = open(argv[1], O_RDONLY);
	r = read(file_origin, file, 1024);
	file_destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);


	do {
		if (file_origin == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(file);
			exit(98);
		}

		w = write(file_destination, file, r);
		if (file_destination == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(file);
			exit(99);
		}

		r = read(file_origin, file, 1024);
		file_destination = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(file);
	file_close(file_origin);
	file_close(file_destination);

	return (0);
}
