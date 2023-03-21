#include "dog.h"
#include<stdlib.h>

/**
 * free_dog -struct that free the dog
 * @d:initalize dog
 *
 */
void free_dog(dog_t *d)
{
	if (d ==  NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
