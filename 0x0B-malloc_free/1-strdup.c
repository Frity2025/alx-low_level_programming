#include<stdio.h>
#include "main.h"
#include<stdlib.h>
/**
 * _strdup - returns a pointer to a newley allocated memory.
 * @str : string to be duplicated
 * Return:returns a pointer to the duplicated string or NULL if insufficient
 */
char *_strdup(char *str)
{
	char *dest_str;

	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	while ( str[i] != '\0')
	{
		; 
		i++;
	}
	dest_str = (char *)malloc(sizeof(char) * (i + 1));
	if (dest_str == NULL)
	{
		return (NULL);
	}
	j = 0;

	while( j <= i)
	{
		dest_str[j] = str[j];
		j++;
	}
	return (dest_str);
}
