#include "main.h"

/**
 * print_most_numbers - function
 *
 * Description: Prints the numbers 0 to 9
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n == '2' || n  == '4')
			;
		else
			_putchar(n);
	}
	_putchar('\n');
}
