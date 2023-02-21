#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number .
 * @r:int r
 * Description: using the main function
 * this program a function that prints the last digit of a number.
 * Return: last digit
 */
int print_last_digit(int r)
{
	int n;

	if (r >= 0)
	{
		n = r % 10;
	}
	else
	{
		n = -1 * (r % 10);
	}
	_putchar((n % 10) + '0');
	return (n % 10);

}
