#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: empty string
 * @b:  is the constant byte
 * @n: number of bytes to fill.
 *
 * Return: a pointer to memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		++i;
	}
	return (s);
}
