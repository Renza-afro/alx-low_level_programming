#include "hash_tables.h"

/**
* *hash_table_create-> create hash table
* @size: array size
* Return: pointer to newly created table
* else return NULL if something wentb wrong
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *h_table;
unsigned long int x;

h_table = malloc(sizeof(hash_node_t));
if (h_table == NULL)
return (NULL);

h_table->size = size;
h_table->array = malloc(sizeof(hash_node_t *) * size);
if (h_table->array == NULL)
return (NULL);
for (x = 0; x < size; x++)
h_table->array[x] = NULL;
return (h_table);
}
