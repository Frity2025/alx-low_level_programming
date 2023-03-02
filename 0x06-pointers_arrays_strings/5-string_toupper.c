#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @ch:letter of string.
 * Return: return ch.
 */
char *string_toupper(char *ch)
{
	int i;

	i = 0;

	while (ch[i] != '\0')
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
		{
			ch[i] = (int)ch[i] - 32;
		}
		i++;
	}
	return (ch);
}
