#include "main.h"
#include <stddef.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
/**
 * _close - close file descriptor
 * @file_descriptor:file descriptor to be closed
 * Return:nothing
 */
void _close(int file_descriptor)
{
	int c;

	c = close(file_descriptor);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, a;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	a = read(file_from, buf, BUFSIZ);
	while (a > 0)
	{
		if (file_to < 0 ||
		write(file_to, buf, a) != a)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			exit(99);
		}
	}
	if (read(file_from, buf, BUFSIZ) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	_close(file_from);
	_close(file_to);
	return (0);
}
