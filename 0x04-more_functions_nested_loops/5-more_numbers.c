#include "main.h"

/**
 * more_numbers -function.
 *
 * Description: Prints the numbers with while loop
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int n, j;

	for (j = 1; j <= 10; j++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
