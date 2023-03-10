#include "main.h"

/**
 * _strlen - a function that returns the length of string.
 * @s:pointer to char
 * Description: using the main function
 * this program return the length of a string.
 * Return: return 0
 */
int _strlen(char *s)
{
	int count = 0;
	int j = 0;

	while (s[count] != '\0')
	{
		j++;
		count++;
	}
	return (j);
}
