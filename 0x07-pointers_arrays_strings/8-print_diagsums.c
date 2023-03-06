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
	int i,  sumDr = 0, sumDl = 0;

	for (i = 0; i < size; i++)
	{
		sumDr = sumDr + a[i];
		sumDl = sumDl + a[size - i - 1];
		a = a + size;
	}
	printf("%d ", sumDr);
	printf("%d\n", sumDl);
}
