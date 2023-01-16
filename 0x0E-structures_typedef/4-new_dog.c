#include "dog.h"
/**
 * _strcpy - copies a string from an address to another
 * @src - source string
 * @dest - destination string
 * Return: the destination address
 */
char *_strcpy(char *src,char  *dest)
{
	int i = 0;

	for (;src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
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
	if (nd == NULL || name == NULL || owner == NULL)
		return (NULL);

	nd->name = malloc(sizeof(name));
	if (nd->name == NULL)
		return (NULL);
	nd->name = _strcpy(name, nd->name);

	nd->age = age;

	nd->owner = malloc(sizeof(owner));
	if (nd->owner == NULL)
		return (NULL);
	nd->owner = _strcpy(owner, nd->owner);

	return (nd);
}
