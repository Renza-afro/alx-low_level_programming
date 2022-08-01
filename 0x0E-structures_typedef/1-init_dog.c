#include "dog.h"
#include <stdio.h>

/**
* init_dog-> dog details
* @d: dog
* @name: dog name
* @owner: dog owner
* @age: dog age
* Return: no
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
