#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenate two strings
 * @s1 :destination string
 * @s2 :Source string
 * Return: dest
 */
char *_strcat(char *s1, char *s2)
{
	char *copy = s1;

	if ((s1 == NULL) && (s2 == NULL))
			return (NULL);
	while (*s1 != '\0')
	{
	s1++;
	}
	while (*s2 != '\0')
	{
	*s1 = *s2;
	s1++;
	s2++;
	}
	*s1 = '\0';
	return (copy);
}
