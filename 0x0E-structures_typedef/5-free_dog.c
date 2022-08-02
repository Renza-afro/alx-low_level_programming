#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_dog-> frees a dog
* @attrbt: ...
* Return: no
*/
void old(dog_t *attrbt)
{
if (attrbt != NULL)
{
free(attrbt->owner);
free(attrbt->name);
free(attrbt);
}
}
