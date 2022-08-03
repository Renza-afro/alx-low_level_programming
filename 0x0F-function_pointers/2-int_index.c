#include "function_pointers.h"

/**
* int_index-> searches for integer
* @size: number of elements
* @array: ...
* @cmp: poiter to function to compare
* Return: -1 if no matches.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int x;
if (array && size && cmp)
for (x = 0; x < size; x++)
if (cmp(array[x]))
return (x);
return (-1);
}
