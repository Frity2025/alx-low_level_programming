#include<stdio.h>
#include<stdlib.h>
#include "3-calc.h"
/**
 * op_add - returns the sum
 * @a:first parameter
 * @b:second parameter
 * Return:sum
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - returns the difference
 * @a:first parameter
 * @b:second parameter
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - returns the product
 * @a:first parameter
 * @b:second parameter
 * Return:product
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - returns the division
 * @a:first parameter
 * @b:second parameter
 * Return:division result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - returns the division
 * @a:first parameter
 * @b:second parameter
 * Return:reminder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
