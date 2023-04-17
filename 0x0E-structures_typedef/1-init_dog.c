#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * init_dog - variable type struct dog
 * @name: name to set
 * @d: pointer to struct dog to set
 * @age: age to set
 * @owner: owner to set
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
