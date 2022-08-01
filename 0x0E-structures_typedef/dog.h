#ifndef _HEADER_
#define _HEADER_

/**
* struct dog-> dog attributes
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: no
*/
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog poppy;

void init_dog(struct dog *attrbt, char *name, float age, char *owner);
void print_dog(struct dog *attrbt);
poppy *puppy(char *name, float age, char *owner);
void old(poppy *attrbt);
#endif
