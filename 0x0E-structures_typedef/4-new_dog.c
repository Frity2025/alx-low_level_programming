#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* new_dog - creates a new dog
* @name: name of the dog
* @age:age of the dog
* @owner:owner of the dog
* Description: function that creat a new dog struct
* Return: pointer to struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int len_name, len_owner, i, j;

	newDog = malloc(sizeof(struct dog));

	if (newDog == NULL)
		return (NULL);

	for (len_name = 0; name[len_name]; len_name++)
		;
	for (len_owner = 0; owner[len_owner]; len_owner++)
		;

	newDog->name = malloc(sizeof(newDog->name) * len_name);

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	for (i = 0; i < len_name; i++)
		newDog->name[i] = name[i];

	newDog->age = age;


	newDog->owner = malloc(sizeof(newDog->owner) * len_owner);

	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (j = 0; j < len_owner; j++)
		newDog->owner[j] = owner[j];

	return (newDog);
}
