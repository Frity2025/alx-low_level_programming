#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: the integer to print
 * @size:size of an array
 * @action:passed pointer function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array)
	{
		if (action && size > 0)
		{
			for (i = 0; i < size; i++)
			{
				action(array[i]);
			}
		}
	}
}
