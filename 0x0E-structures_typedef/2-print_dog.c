#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_dog-> prints a struct dog
* @d: dog attr
* Retuen: no
*/
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", (d->name) ? d->name : "(nil)");
printf("Age: %f\n", (d->age) ? d->age : 0);
printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
}
}
