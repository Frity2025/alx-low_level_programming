#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 * _print_rev_recursion -  prints a string in reverse.
 * @s:string to be reversed
 * Return: a pointer to memory area.
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
}