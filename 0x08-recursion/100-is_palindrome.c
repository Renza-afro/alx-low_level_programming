#include "main.h"

int check_palindrome(char *s);

/**
* is_palindrome-> returns 1 if palindrome
* @s: string
* Return: 1 if palindrome. 0 if not
*/
int is_palindrome(char *s)
{
if (*s == '0')
return (1);
return (check_palindrome(s));
}

/**
* check_palindrome-> check if palindrome
* @s: string
* Return: value
*/
int check_palindrome(char *s)
{
int len = _strlen_recursion(s) - 1;
if (*s == s[len])
{
s++;
len++;
}
else
{
return (0);
}
return (1);
}

/**
* _strlen_recursion-> for string length
* @s: string
* Return: length
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (strlen_recursion(s) + 1);
}
