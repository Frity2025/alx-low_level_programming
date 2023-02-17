#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number stored in the variable n
 *
 * Description: using the main function
 * this program prints "Last digit is greater than 5,0,or less than 6 and not 0
 * Return: 0
 */

int main(void)
{
int n;
int d;

srand(time(0));
n = rand() - RAND_MAX / 2;
d = n % 10;
/* your code goes there*/
if (n > 5)
{
printf("Last digit %d is %d is greater than 5\n", n, d);
}
else if (n == 0)
{
printf("Last digit %d is %d is zero\n", n, d);
}
else if (n < 6 && n != 0)
{
printf("Last digit %d is %d and is less than 6 and not 0\n", n, d);
}
return (0);
}
