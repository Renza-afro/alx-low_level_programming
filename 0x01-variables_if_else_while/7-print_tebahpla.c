#include <stdio.h>

/**
* main -> prints the lowercase alphabet in reverse, a new line
* use putchar
* use putchar twice
* Return: always 0
*/

int main(void)
{

int alphabetReverse;
for (alphabetReverse = 'z'; alphabetReverse >= 'a'; alphabetReverse--)
{
putchar(alphabetReverse);
}
putchar('\n');

return (0);
}
