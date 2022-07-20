#include "main.h"

/**
* factorial-> returns a factorial of given number
* @n: integer
* Return: n. -1 if lower than 0
*/

int factorial(int n)
{
if (n < 0)
return (-1);
if (n <= 1)
return (1);
return (n * factorial(n - 1));
}
