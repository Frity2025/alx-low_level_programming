#include "main.h"
#include <stdio.h>

/**
 * _abs - a function that computes the absolute value of an integer.
 * @n:int n
 * Description: using the main function
 * this program a function that computes the absolute value of an integer.
 * Return: n if n>=0 else return n*-1
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
		return (n);
}
