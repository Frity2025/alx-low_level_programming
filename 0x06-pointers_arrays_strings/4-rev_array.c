#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the content of an integer.
 * @a: an array of integers
 * @n: the number of elements 
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
