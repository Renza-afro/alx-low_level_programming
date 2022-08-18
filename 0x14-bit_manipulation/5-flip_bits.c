#include "main.h"

/**
* flip_bits->returns number of bit
* @n:..
* @m:..
* Return:..
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int num = n ^ m;
int index = (sizeof(unsigned long int) * 8) - 1;
int flip = 0;
while (index >= 0)
{
if ((num >> index) & 1)
flip++;
index--;
}
return (flip);
}
