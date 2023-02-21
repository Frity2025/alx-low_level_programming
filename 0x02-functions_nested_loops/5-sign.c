#include "main.h"

/**
 * print_sign- a function that prints the sign of a number.
 * @n:int n
 * Description: using the main function
 * this program a function that  prints the sign of a number.
 * Return: 1 if n >0 ,0 if n=0 else return -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
