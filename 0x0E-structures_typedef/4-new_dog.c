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
dog_t *cute;
int nameA = 0, ownerA = 0;
if (name != NULL && owner != NULL)
{
nameA = _strlen(name) + 1;
ownerA = _strlen(owner) + 1;
cute = malloc(sizeof(dog_t));

if (cute == NULL)
return (NULL);

cute->name = malloc(sizeof(char) * nameA);
if (cute->name == NULL)
{
free(cute);
return (NULL);
}
cute->owner = malloc(sizeof(char) * ownerA);
if (cute->owner == NULL)
{
free(cute->name);
free(cute);
return (NULL);
}
cute->name = _strcpy(cute->name, name);
cute->owner = _strcpy(cute->owner, owner);
cute->age = age;
}
return (cute);
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
