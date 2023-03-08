#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer to char
 *
 * Return: len
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (s[0] != '\0')
	{
		len++;
		len = len +  _strlen_recursion(s + 1);
	}
	return (len);
}
