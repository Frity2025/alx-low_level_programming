#include "main.h"
#include<stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *a, n;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(*a) * ((max - min) + 1));

	if (!a)
		return (NULL);
	n = 0;

	while (min <= max)
	{
		a[n] = min;
		n++;
		min++;
	}


	return (a);
}
