#include "main.h"


/**
* _sqrt-> computes natural square root
* @n: number
* @x: iterate num
* Return: natural square root
*/
int _sqrt(int n, int x);


/**
* _sqrt_recursion-> returns natural square root of number
* @n: number
* Return: natural square root. -1 if n does not have quare root
*/
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
* _sqrt-> computes natural square root
* @n: number
* @x: iterate num
* Return: natural square root
*/

int _sqrt(int n, int x)
{
int sqrt = x * x;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (x);
return (_sqrt(n, x + 1));
}
