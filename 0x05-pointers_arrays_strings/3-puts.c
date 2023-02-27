#include "main.h"

/**
 * _puts - print a string.
 * @str:string
 * Description: using the main function
 * this program prints a string in stdout.
 * Return:  return nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
