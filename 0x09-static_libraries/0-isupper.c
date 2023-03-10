#include "main.h"

/**
 * _isupper - a function that checks for upperase character.
 * @c:int c
 * Description: using the main function
 * this program a function checks for upperrcase character.
 * Return: 1 if uppercase else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
