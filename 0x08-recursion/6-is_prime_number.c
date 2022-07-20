#include "main.h"

int check_prime(int n, int x);

/**
* is_prime_number->returns 1 if the input is a prime number
* @n: integer
* Return: 1 if prime number.otherwise 0
*/
int is_prime_number(int n)
{
return (check_prime(n, 1));
}

/**
* check_prime-> return prime number
* @n: number
* @x: iteation
* Return: value
*/
int check_prime(int n, int x)
{
if (n <= 1)
return (0);
if (n % x == 0 && x > 1)
return (0);
if ((n / x) < x)
return (1);
return (check_prime(n, x + 1));
}
