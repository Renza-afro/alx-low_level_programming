#include <stdio.h>

/**
* main-> prints name of the file it was compiled, new line
* Return: 0
*/

char main(void)
{
putchar(__FILE__);
putchar('\n');
return (0);
}
