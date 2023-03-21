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
	if (d != NULL)
	{
		if (d->name)
			printf("Name:%s\n", d->name);
		else
			printf("Name:%s\n", "(nil)");
		printf("Age:%f\n", d->age);
		if (d->owner)
			printf("Owner:%s\n", d->owner);
		else
			printf("Owner = (nil)\n");
	}
}
