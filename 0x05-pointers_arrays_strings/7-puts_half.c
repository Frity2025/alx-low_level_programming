#include "main.h"
/**
*puts_half - prints half of a string
*@str: string
*Return:nothing
*/
void puts_half(char *str)
{
	int len = _strlen(str);

	if (len % 2 == 0)
	len = len / 2;

	else
	len = (len + 1) / 2;

	while (str[len] != '\0')
	{
	_putchar(str[len]);
	len++;
	}
	_putchar('\n');
}


/**
 *_strlen - length of a string
 * @s: string
 *Return: returns inc;
 */
int _strlen(char *s)
{
	int count, inc;

	inc = 0;

	for (count = 0; s[count] != '\0'; count++)
		inc++;

	return (inc);
}
