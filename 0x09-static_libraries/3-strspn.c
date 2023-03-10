#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 * _strspn - gets the length of prefix substring
 * @s: the null-terminated string s
 * @accept: the null-terminated string accept
 *
 *
 * Return: number of bytes in the initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s && strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
