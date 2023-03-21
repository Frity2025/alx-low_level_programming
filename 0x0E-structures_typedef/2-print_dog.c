#include "dog.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d:pointer to struct
 * Description: Function that print the variable of struct dog
 * Return:pointer to struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
			d->name = "(nil)";
		else
			printf("Name:%s\n", d->name);
	printf("Age:%f\n", d->age);
	if (d->owner == NULL)
		d->owner = "(nil)";
	else
		printf("Owner:%s\n", d->owner);
	}
}
