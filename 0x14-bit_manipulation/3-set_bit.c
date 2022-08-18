#include "main.h"

/**
* set_bit-> sets value of bit
* @n:...
* @index:..
* Return: 1 if worked. -1 error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int num = 1;
if (index > (sizeof(unsigned long int) * 8))
return (-1);
num <<= index;
*n = *n | num;
return (1);
}
