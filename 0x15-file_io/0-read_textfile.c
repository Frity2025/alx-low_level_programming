#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include "main.h"
/**
 * read_textfile - read and print text file
 * @filename: variable pointer
 * @letters:size letters
 * Return:the actual number of letters it could read and print, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t filename1, letter1, count;

	char *fp;

	fp = malloc(sizeof(char) * letters);
	if (!fp)
		return (0);
	if (!filename)
		return (0);

	filename1 = open(filename, O_RDONLY);
	if (filename1 == -1)
		return (0);
	letter1 = read(filename1, fp, letters);
	count = write(STDOUT_FILENO, fp, letter1);
	free(fp);
	close(filename1);
	return (count);
}

