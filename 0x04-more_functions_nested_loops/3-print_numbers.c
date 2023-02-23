#include "main.h"

/**
 * print_numbers - print number between 0 to 9 except 2 and 4
 * Description: using the main function
 * this function print 0,1,3,5,6,7,8,9.
 * Return: 0
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n != 2 && n != 4)
			_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
