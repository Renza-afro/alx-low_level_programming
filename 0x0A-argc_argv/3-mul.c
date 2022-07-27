#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* main - Prints the multiplication of two args numbers
* @x: argument count
* @y: args
* Return: 1 if error. 0
*/
int main(int x, char **y)
{
if (x < 3)
{
printf("%d", "Error'\n'");
return (1);
}

printf("%d\n", atoi(*(y + 1)) * atoi(*(y + 2)));
return (0);
}
