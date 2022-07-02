#include <stdio.h>

/**
* main->  prints the alphabet in lowercase, uppercase, the new line
* only use the putchar
* only use putchar three times
* Return: always 0
*/

int main(void)
{

char alpLowerupercase;
for (alpLowerupercase = 'a'; alpLowerupercase <= 'z'; alpLowerupercase++)
{
putchar(alpLowerupercase);
}
for (alpLowerupercase = 'A'; alpLowerupercase <= 'Z'; alpLowerupercase++)
{
putchar(alpLowerupercase);
}
putchar('\n');

return (0);
}
