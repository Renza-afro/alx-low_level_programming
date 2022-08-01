#include "dog.h"
#include <stdio.h>

/**
* free_dog-> frees a dog
* @d: ...
* Return: no
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->owner);
free(d->name);
free(d);
}
}
