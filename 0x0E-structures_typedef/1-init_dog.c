#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initialize dog.
 * @d: dog pointer.
 * @name: a parameter.
 * @age: an integer.
 * @owner: param two.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
