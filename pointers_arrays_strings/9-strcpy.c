#include "main.h"
#include "string.h"
/**
 * _strcpy - _strcpy copies the string pointed to by src
 * @src: source
 * @dest: The buffer pointed
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int inc = 0;

while (*(src + inc) != '\0')

{
*(dest + inc) = *(src + inc);
inc++;
}
*(dest + inc) = '\0';
return (dest);

}
