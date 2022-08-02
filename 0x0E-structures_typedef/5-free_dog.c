#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_dog-> frees a dog
* @attrbt: ...
* Return: no
*/
void free_dog(dog_t *attrbt)
{
if (attrbt != NULL)
{
free(attrbt->owner);
free(attrbt->name);
free(attrbt);
}
}
