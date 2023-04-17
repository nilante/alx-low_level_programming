#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type
 * @d: the pointer
 * @name: the name of th puppy
 * @age: the age of th puppy
 * @owner: the owner of th puppy
	 */
	void init_dog(struct dog *d, char *name, float age, char *owner)
	{
		if (d == NULL)
			d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
