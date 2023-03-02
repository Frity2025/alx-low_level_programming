#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Function compare two string.
 * @s1:string no 1
 * @s2:string no 2to be compared
 *
 * Return: return 0,15,-15
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
