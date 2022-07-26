#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main-> Entry
* @x: number of args
* @y: pointer to args
* Return: 1 for error, 0 not
*/
int main(int x, char **y)
{
int sum, coins = 0;

if (x != 2)
{
printf("Error\n");
return (1);
}
sum = atoi(*(y + 1));
while (sum >= 25)
sum -= 25, coins++;
while (sum >= 10)
sum -= 10, coins++;
while (sum >= 5)
sum -= 5, coins++;
while (sum >= 2)
sum -= 2, coins++;
while (sum >= 1)
sum--;
coins++;
printf("%d\n", coins);
return (0);

