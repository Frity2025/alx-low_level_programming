#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer to the object to copy to
 * @src: pointer to the object to copy from
 * @n: number of bytes to fill.
 *
 * Return: a pointer to memory dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		++i;
	}
	return (dest);
}
