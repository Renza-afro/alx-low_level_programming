#include "main.h"

/**
* binary_to_unit-> converts a binary to unsigned int
* @b: pointer
* Return: converted num....
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int x = 0, base2 = 0;

if (b == NULL)
return (0);
while (b[x] != '\0')
{
if (b[x] != '0' && b[x] != '1')
return (0);
base2 <<= 1;
if (b[x] == '1')
base2 ^= 1;
x++;
}
return (base2);
}
