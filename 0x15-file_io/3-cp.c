#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 *
 * main -program that copies the content of one file to another file
 * @argc:
 * @argv:string argument
 * Return:0
 */
int main(int argc, char *argv[])
{
	int original, destination;
	int x = 1024, y = 0;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage:cp original  destination\n"), exit(97);
	original = open(argv[1], O_RDONLY);
	if (original == -1)
	{
		dprintf(STDERR_FILENO, "Error:can't read from file %s\n", argv[1]);
		exit(98);
	}
	destination = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (destination == -1)
	{
		 dprintf(STDERR_FILENO, "Error:can't write from file %s\n", argv[2]);
		 close(original);
		 exit(99);
	}
	while (x == 1024)
	{
		x = read(original, buf, 1024);
		if (x == -1)
		{
			dprintf(STDERR_FILENO, "Error:can't read from file %s\n", argv[1]);
			exit(98);
		}
		y = write(destination, buf, x);
		if (y < x)
			dprintf(STDERR_FILENO, "Error:can't write from file %s\n", argv[2]), exit(99);
	}
	if (close(original) == -1)
		dprintf(STDERR_FILENO, "Error:can't close fd  %d\n", original), exit(100);
	if (close(destination) == -1)
		dprintf(STDERR_FILENO, "Error:can't close fd  %d\n", destination), exit(100);
	return (0);
}
