#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes the dog struct
 * @d: the dog struct
 * @name: dog name
 * @age: dog age
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, char *owner, int age)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->owner = owner;
	d->age = age;
}


