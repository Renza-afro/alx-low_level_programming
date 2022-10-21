#include "hash_tables.h"

/**
* key_index-> give key index
* @key: key
* @size: array size
* Return: index at which the key/value pair should be stored
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
