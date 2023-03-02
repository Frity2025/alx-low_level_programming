#include<stdio.h>
#include "main.h"
/**
 * _strncat- concatenate two string.
 * @dest:destination string
 * @src:source string to be appende.
 * @n:int
 * Return:dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[dest_len + index] = src[index];
	dest[dest_len + index] = '\0';
	return (dest);
}
