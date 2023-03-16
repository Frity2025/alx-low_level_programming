#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 * @nmemb: number of element
 * @size: the size of element in bytes
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ch;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ch = malloc(nmemb * size);
	if (ch == NULL)
		return (NULL);
	for (x = 0; x < (nmemb * size); x++)
		ch[x] = 0;
	return (ch);
}

