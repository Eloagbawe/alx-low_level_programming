#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
		return (d);
	}
	return (NULL);
}
