#include "dog.h"
/**
 * free_dog - it frees memory allocated to a dog
 * @d: the address of the dog to be freed
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
