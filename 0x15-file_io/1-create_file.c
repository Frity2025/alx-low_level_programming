#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include "main.h"
/**
 * create_file - create file
 * @filename: name of file to create
 * @text_content:a NULL terminated string to write to the file
 * Return:1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, w, count;

	if (!filename)
		return (-1);
	if (text_content)
	{
		count = 0;
		while (text_content[count])
		{
			count++;
		}
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(file, text_content, count);
	if (file == -1 || w == -1)
		return (-1);
	close(file);
	return (1);
}

