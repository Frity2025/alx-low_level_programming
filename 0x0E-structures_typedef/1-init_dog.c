#include "dog.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * init_dog - initialize the variable
 * @name:name of the dog
 * @age:age of the dog
 * @owner: owner of the dog
 *
 * Description: Function that initalize the variable of struct dog
 * with name of the dog,ageof the dog and owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
