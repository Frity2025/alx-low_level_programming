#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion -recursive fun to print the natural square root of a number.
 * @n: integer to calculate the square root
 * @k:iterator
 * Return:square root of a number.
 */
int _sqrt(int n, int k);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
/**
 * _sqrt - print square root of a number
 * @n:an integer number
 * @k:iterator
 * Return: square root of a number.
 */
int _sqrt(int n, int k)
{
	int sqrt = k * k;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (k);
	return (_sqrt(n, k + 1));
}
