#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 -function that prints 10 times the alphabet, in lowercas
 * Description: using the main function
 * this program  function that prints 10 times the alphabet, in lowercase
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
