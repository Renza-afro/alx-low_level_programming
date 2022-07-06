#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void postitive_or_negative(int i)
{

int n;
srand(time(0));
n = i;
if (n > 0)
printf("%d is positive\n", n);

if (n == 0)
printf("%d is zero\n", n);

if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}

/**
* main-> file is a test for a postitive or negative
* Return: 0
*/

int main(void)
{

int i;
i = 0;
postitive_or_negative(i);

return (0);
}
