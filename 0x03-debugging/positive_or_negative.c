#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* positive_or_negative - a function prints if integer is positive,negative or 0
* @i :number
* Return: 0
*/
void positive_or_negative(int i)
{
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
}
