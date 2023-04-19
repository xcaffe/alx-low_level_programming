#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializing a variable truct dog
 * @d: pointer
 * @name: initializing name
 * @age: initializing age
 * @owner: initializing owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
