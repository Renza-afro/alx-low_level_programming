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
* append_text_to_file-> appends text at the end
* @filename:..
* @text_content:..
* Return: 1 success. -1 Null
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
size_t length;

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content == NULL)
return (close(fd) == -1 ? -1 : 1);
length = _strlen(text_content);
if (write(fd, text_content, length) == -1)
{
close(fd);
return (-1);
}
return (close(fd) == -1 ? -1 : 1);
}
