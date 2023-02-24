#include "main.h"

/**
 * print_line - function
 *
 * Description:draw straight  lines in the terminal
 *@n: number of lines
 * Return: nothing
 */

void print_line(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= n; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
