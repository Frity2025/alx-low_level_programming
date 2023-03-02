#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverese the content of the array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = n - 1;

	while (i >= n / 2)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
		i--;
	}
}
