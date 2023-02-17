#include <stdio.h>

/**
 * main -program that prints the lowercase alphabet in reverse
 *
 * Description: using the main function
 * this program that prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
char x;

for (x = 'z'; x >= 'a'; x--)
{
putchar(x);
}
putchar('\n');
return (0);
}
