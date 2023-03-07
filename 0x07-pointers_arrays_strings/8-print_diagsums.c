#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals arrays.
 * @a:2d array
 * @size:size of array
 *
 *
 * Return: nothing.
 */

void print_diagsums(int *a, int size)
{
	int n;

	unsigned int sum = 0, sum1 = 0;

	for (n = 0; n < size; n++)
	{
		sum = sum +  a[(size * n) + n];
		sum1 = sum1 +  a[(size * (n + 1)) - (n + 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
