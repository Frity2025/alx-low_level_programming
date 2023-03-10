#include "main.h"

/**
 * _isdigit - a function that checks if input is digit.
 * @c:int c
 * Description: using the main function
 * this function checks if parameter is digit.
 * Return: 1 if input is digit else return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
