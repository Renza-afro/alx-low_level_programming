#include "main.h"

/**
* clear_bit->sets the value of a bit
* @n:...
* @index:...
* Return: 1. -1 error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int num = 1;
if (index > (sizeof(unsigned long int) * 8))
return (-1);
num <<= index;
*n = *n & ~num;
return (1);
}
