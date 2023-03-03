#include "main.h"
#include <stdio.h>

/**
 *leet - encodes a string into 1337.
 *@s: pointer to string.
 *Return: pointer to s.
 */
char *leet(char *s)
{
	char *r = s;
	char leetLetter[] = {'a', 'e', 'o', 't', 'l'};
	char leetNumn[] = {4, 3, 0, 7, 1};
	int i = 0;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == leetLetter[i] || *s == leetLetter[i] - 32)
				*s = leetNumn[i] + '0';
		}
		s++;
	}
	return (r);
}
