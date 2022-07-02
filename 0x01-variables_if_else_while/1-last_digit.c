#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main ->  assign a random number to the variable n each time it is executed
* print the last digit of the number stored in the variable n
* Return: always 0
*/

int main(void)
{
int n, lastNum;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastNum = n % 10;
if (lastNum > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
}
else if (lastNum == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastNum);
}
else if (lastNum < 6 && lastNum != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);
}

return (0);
}
