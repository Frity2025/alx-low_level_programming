#include<stdio.h>
#include "main.h"
#include<stdlib.h>
/**
 *
 * create_array -create and initalize a character of array
 * @size :size of an array
 * @c :character to be created and intialized
 * return - a pointer to char or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s = NULL;

	unsigned int i;

s =(char*) malloc(size * sizeof(c));
	if (size == 0)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
