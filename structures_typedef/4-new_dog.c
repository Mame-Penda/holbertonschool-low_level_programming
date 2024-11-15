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
int name_lenght, owner_lenght, i;
dog_t *new_dog;
name_lenght = owner_lenght = 0;

while (name[name_lenght++])
	;
while (owner[owner_lenght++])
	;
new_dog = malloc(sizeof(dog_t));
if (new_dog == 0)
return (0);
new_dog->name = malloc(name_lenght * sizeof(new_dog->name));
if (new_dog->name == 0)
{
free(new_dog);
return (0);
}
for (i = 0; i < name_lenght; i++)
new_dog->name[i] = name[i];
new_dog->age = age;
new_dog->owner = malloc(owner_lenght * sizeof(new_dog->owner));
if (new_dog->owner == 0)
{
free(new_dog->name);
free(new_dog);
return (0);
}
for (i = 0; i < owner_lenght; i++)
new_dog->owner[i] = owner[i];
return (new_dog);
}
