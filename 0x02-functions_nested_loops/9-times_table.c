#include<stdio.h>
#include "main.h"

/**
 * times_table -prints the 9 times table, starting with 0
 * Description: using the main function
 * this program prints the 9 times table, starting with 0
 * Return: nothing
 */
void times_table(void)
{
int num, mult, res;
for (num = 0; num <= 9; num++)
{
_putchar('0');

for (mult = 1; mult <= 9; mult++)
{
_putchar(',');
_putchar(' ');
res = num * mult;
if (res <= 9)
_putchar(' ');
else
_putchar((res / 10) + '0');

_putchar((res % 10) + '0');
}
_putchar('\n');
}
}
