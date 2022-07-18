#include "main.h"

/**
* print_diagsums-> print su of two diagonals og sqaure matrix
* @a: matrix
* @size: size
* Return: nothing
*/

void print_diagsums(int *a, int size)
{
int x, sum_a = 0, sum_b = 0;
for (x  = 0; x < size; x++)
{
sum_a += a[(size + 1) * x];
sum_b += a[(size - 1) * (x + 1)];
}
printf("%d, %d\n", sum_a, sum_b);
}
