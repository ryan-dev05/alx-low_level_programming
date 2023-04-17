#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - outputs a struct dog
 * @d: struct dog to print
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d->name == NULL)
		d->name = "(nil)";

	printf("Name: %s\nOwner: %s\nAge: %f\n", d->name, d->owner, d->age);
}
