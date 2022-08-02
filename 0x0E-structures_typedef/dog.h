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
/*dog_t-> dog struct*/
typedef struct dog dog_t;

void init_dog(struct dog *attrbt, char *name, float age, char *owner);
void print_dog(struct dog *attrbt);
dog_t *new_dog(char *name, float age, char *owner);
void old(dog_t *attrbt);
#endif
