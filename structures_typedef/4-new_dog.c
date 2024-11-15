#include "dog.h"
#include "stdlib.h"
/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: the new struct dog
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	if (name == 0 || age < 0 || owner == 0)
		return (0);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == 0)
		return (0);
	new_dog->name = malloc(sizeof(char) * (

