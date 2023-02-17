#include <stdio.h>

/**
 * main -a program that prints all the numbers of base 16
 *
 * Description: using the main function
 * this program that prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
int x;

for (x = 48; x <= 57; x++)
{
putchar(x);
if (x != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
