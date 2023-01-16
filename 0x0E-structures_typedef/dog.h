#ifndef _DOG_H_
#define _DOG_H_
#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - it stores properties of dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 * struct dog - it stores name, age, and owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
