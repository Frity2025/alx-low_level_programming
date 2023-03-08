#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: string to be printed
 *
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	_putchar(s[0]);
	_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
