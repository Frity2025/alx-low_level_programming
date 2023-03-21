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
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
