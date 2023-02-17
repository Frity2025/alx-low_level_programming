#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase
 *
 * Description: using the main function
 * this program prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
