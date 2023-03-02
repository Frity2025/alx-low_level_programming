#include "main.h"
#include <stdio.h>

/**
 * _strncpy - a function that copies a string.
 * @dest:destinstion string
 * @src:source to be copied
 * @n :n bit the source copied
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	for ( ; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
