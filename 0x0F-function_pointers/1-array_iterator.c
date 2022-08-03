#include "function_pointers.h"

/**
 * array_iterator->executes a function
 * @array: ptr to an array
 * @size: array size
 * @action: ptr to function
 * Return: no
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t x;
if (array && size && action)
for (x = 0; x < size; x++)
action(array[x]);
}
