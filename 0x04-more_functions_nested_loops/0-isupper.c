#include "main.h"

/**
 * _isupper - a function that checks for upperase character.
 * @c:int c
 * Description: using the main function
 * this program a function checks for upperrcase character.
 * Return: 1 if lowercase else return 0
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
