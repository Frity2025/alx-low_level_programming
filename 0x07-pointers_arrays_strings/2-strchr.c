#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: string file from where c looked.
 * @c: character to be looked
 *
 *
 * Return:a pointer to the first occurrence of c in s, or NULL.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0' && c != '\0')
	{
		if (*s == c)
			return (s);

		++s;
	}
	return (0);
}
