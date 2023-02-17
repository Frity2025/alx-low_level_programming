#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number stored in the variable n
 *
 * Description: using the main function
 * this program prints last digit is greater than 5,0, or less than 6 and not 0
 * Return: 0
 */
int main(void)
{
int n;
int d;

srand(time(0));
n = rand() - RAND_MAX / 2;
d = n % 10;

if (d > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, d);
}
else if (d == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, d);
}
else
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n",  n, d);
}
return (0);
}
