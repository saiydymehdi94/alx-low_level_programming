#include <stdlib.h>
#include "dog.h"

/**
 * inir_dog -initialize a variable of type structure dog
 * @d: pointer 
 * @name: 1st nember
 * @age: 2nd nember
 * @owner: 3rd nember
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
