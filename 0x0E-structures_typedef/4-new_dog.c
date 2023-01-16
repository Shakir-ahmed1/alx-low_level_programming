#include "dog.h"
/**
 * new_dog - it returns a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: NULL if failed, otherwise the address of the new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
	{
		return (NULL);
	}
	nd->name = name;
	nd->age = age;
	nd->owner = owner;

	return (nd);
}
