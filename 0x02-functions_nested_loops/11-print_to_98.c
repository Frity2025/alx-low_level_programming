#include<stdio.h>
#include "main.h"

/**
 * void print_to_98(int n) -prints all natural numbers from n to 98
 * @n:int n
 * Description: using the main function
 * this program a function that checks for lowercase character.
 * Return: nothing
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);

printf("%d\n", n);
}
else
{
while (n < 98)
printf("%d, ", n++);

printf("%d\n", n);
}
}
