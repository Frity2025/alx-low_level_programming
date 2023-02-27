#include "main.h"
/**
*rev_string - Reverse a string
*@s: String to reverse
*Return: Nothing
*/
void rev_string(char *s)
{
int i = 0, len;
char *start, *end, temp;

len= _strlen(s) - 1;
start = s;
end = s;

for(i = 0; i < len - 1; i++)
	end++;
for(i = 0; i < len / 2 ; i++)
{
	temp =*end;
	*end = *start;
	*start = temp;
	start++;
	end--;
}
}

/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
	int count, inc;
	inc = 0;
for (count = 0; s[count] != '\0'; count++)
	inc++;

return (inc);
}
