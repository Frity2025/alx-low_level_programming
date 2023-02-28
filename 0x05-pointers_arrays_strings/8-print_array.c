#include "main.h"
#include <stdio.h>
/**
*print_array -  a function that prints n elements of an array
*@a: array
*@n: number of elements
*Return: nothing
*/

void print_array(int *a, int n)
{
	int i;

for (i = 0; i < n; i++)
{
	printf("%d, ", a[i]);
}
printf("\n");
}
