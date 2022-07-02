#include <stdio.h>

/**
* main->  prints the alphabet in lowercase, followed by a new line
* Print all the letters except q and e
* use the putchar
* use putchar twice
* Return: always 0
*/

int main(void)
{

char alphabetLowercase;
for (alphabetLowercase = 'a'; alphabetLowercase <= 'z'; alphabetLowercase++)
{
if (alphabetLowercase != 'e' && alphabetLowercase != 'q')
{
putchar(alphabetLowercase);
}
}
putchar('\n');

return (0);
}
