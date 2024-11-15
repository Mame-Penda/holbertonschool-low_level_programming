#include "stdlib.h"
#include "dog.h"
/**
 * free_dog - function that frees dogs.
 * @d: the string to be frees
 * 
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
