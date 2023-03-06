#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 * _strpbrk - searches a string of any sets of bytes
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 *
 * Return: pointer to the byte in s that matches in accept, or NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int n;

	while (*s != '\0')
	{
		n = 0;

		while (accept[n] != '\0')
		{
			if (*s == accept[n])
			{
				return (s);
			}
			++n;
		}
		++s;
	}
			return (0);
}
