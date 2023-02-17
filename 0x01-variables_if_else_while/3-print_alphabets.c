#include <stdio.h>

/**
 * main -  program that prints the alphabet in lowercase, and then in uppercase
 *
 * Description: using the main function
 * this program prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */

int main(void)
{
char x;

for (x = 'a' ; x <= 'z' ; x++)
{
putchar(x);
}
for (x = 'A' ; x <= 'Z' ; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
