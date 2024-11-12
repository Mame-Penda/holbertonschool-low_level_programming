#include "main.h"
#include "stdlib.h"
/**
 * create_array - Crée un tableau de caractéres et l'initialise
 * avec un caractére spécifique
 * @size: Taille de l'espace mémoire à allouer pour le tableau
 * @c: Caractère avec lequel initialiser le tableau
 * Return: 0 si size vaut 0 ou si l'allocation échoue,
 * sinon un pointeur vers le tableau
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
return (0);
array = malloc(size * sizeof(char));
if (array == 0)
return (0);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}


