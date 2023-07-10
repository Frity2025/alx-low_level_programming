#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include "main.h"
/**
 * append_text_to_file- appends text at the end of a file
 * @filename: name of file to create
 * @text_content:a NULL terminated string to  add at the end of the file
 * Return:1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, w, count;

	if (!filename)
		return (-1);
	if (text_content)
	{
		count = 0;
		while (text_content[count] != '\0')
		{
			count++;
		}
	}
	file = open(filename, O_WRONLY | O_APPEND);
	w = write(file, text_content, count);
	if (file == -1 || w == -1)
		return (-1);
	close(file);
	return (1);
}

