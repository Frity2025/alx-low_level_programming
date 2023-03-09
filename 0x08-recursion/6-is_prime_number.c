#include <stdio.h>
#include "main.h"
/**
 * is_prime_number -returns the natural square root of a number.
 * @n: integer to calculate the square root
 * @k: integer number input
 * Return:1 if n is a prime number or else 0
 */
int _prime(int n, int k);
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
		return (_prime(n, 2));
}
/**
 * _prime - returns the natural square root of a number
 * @n:integer number
 * @k: integer number
 * Return:1 if n is a prime number or else 0
 */
int _prime(int n, int k)
{
	if (k < n)
	{
		if (n % k == 0)
		{
			return (0);
		}
		else
		{
			return (_prime(n, k + 1));
		}
	}
	else
	{
		return (1);
	}
}
