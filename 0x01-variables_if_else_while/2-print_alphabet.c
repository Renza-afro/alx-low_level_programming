#include <stdio.h>

/**
* main ->  prints the alphabet in lowercase, followed by a new line
* use the putchar
* use putchar twice in code
* Return: always 0
*/

int main(void)
{

char aphabetLowercase;
for (aphabetLowercase = 'a'; aphabetLowercase <= 'z'; aphabetLowercase++)
{
putchar(aphabetLowercase);
}
putchar('\n');

return (0);
}
