#include "main.h"

/**
* _strlen - returns string length
* @s: string to check length
* Return:  string
*/
int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
len++;
return (len);
}

/**
* create_file-> create a file
* @filename:..
* @text_content:..
* Return: ...
*/

int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t length;

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (text_content == NULL)
return (closed(fd) == -1 ? -1 : 1);
length = _strlen(text_content);
if (write(fd, text_content, lenghth) != length)
{
closed(fd);
return (-1);
}
return (closed(fd) == -1 ? -1 : 1);
}
