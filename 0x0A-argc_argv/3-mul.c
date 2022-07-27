#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* main - Prints the multiplication of two args numbers
* @x: argument count
* @y: args
* Return: 1 if error. 0
*/
int main(int x, char *y[])
{
int num1 = 0, num2 = 0;
if (x == 3)
{
num1 = atoi(y[1]);
num2 = atoi(y[2]);
printf("%d\n", num1 * num2);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
