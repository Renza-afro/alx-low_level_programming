#include "main.h"

/**
* *string_toupper-> changes all lowecases to uppercase
* @i: string
* Return: string
*/

char *string_toupper(char *i)
{
int x = 0;
while (i[x])
{
if (i[x] >= 97 && i[x] <= 122)
{
i[x] -= 32;
}
x++;
}
return (i);
}
