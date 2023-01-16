#include "dog.h"
/**
 * print_dog - it prints the properties of the dog
 * @d: the address of the dog data type
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	else
		printf("Name: (nil)");
}
