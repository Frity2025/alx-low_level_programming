#include "main.h"

/**
 * _isalpha- a function that checks for alphabetic character.
 * @c:int c
 * Description: using the main function
 * this program a function that checks for alphabetic character.
 * Return: 1 if alphabetic else return 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
