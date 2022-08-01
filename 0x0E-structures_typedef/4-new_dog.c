#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
* new_dog-> create new dog
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: name
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *poppy;
int name_1 = 0, owner_1 = 0;
if (name != NULL && owner != NULL)
{
name_1 = _strlen(name) + 1;
owner_1 = _strlen(owner) + 1;
poppy = malloc(sizeof(dog_t));

if (poppy == NULL)
return (NULL);

poppy->name = malloc(sizeof(char) * name_1);
if (poppy->name == NULL)
{
free(poppy);
return (NULL);
}
poppy->owner = malloc(sizeof(char) * owner_1);
if (poppy->owner == NULL)
{
free(poppy->name);
free(poppy);
return (NULL);
}
poppy->name = _strcpy(poppy->name, name);
poppy->owner = _strcpy(poppy->owner, owner);
poppy->age = age;
}
return (poppy);
}

/**
* _strlen->string length
* @s: string
* Return: string
*/
int _strlen(char *s)
{
int count = 0;
for (; *s != '\0'; s++)
{
count++;
}
return (count);
}

/*string copy function*/

/**
* _strcpy-> copies a string
* @dest: destination
* @src: string
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int x;
for (x = 0; src[x] != '\0'; x++)
{
dest[x] = src[x];
}
dest[x++] = '\0';
return (dest);
}
