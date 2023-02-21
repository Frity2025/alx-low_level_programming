#include <stdio.h>
#include "main.h"
/**
 * function- print the alphabet in lower case letter
 *
 * Description: using the main function
 * this program prints prints the alphabet, in  lower case
 * returns-nothing
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
}
