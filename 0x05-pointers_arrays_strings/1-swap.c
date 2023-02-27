#include "main.h"

/**
 * swap_int - a function that swaps two numbers.
 * @a:first number
 * @b:second number
 * Description: using the main function
 * this function swap two numbers using temp.
 * Return:return 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
