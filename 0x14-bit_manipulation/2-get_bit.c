#include "main.h"

/**
* get_bit-> returns value of a bit
* @n:...
* @index:....
* Return: value..
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8))
return (-1);
return ((n >> index) & 1 ? 1 : 0);
}
