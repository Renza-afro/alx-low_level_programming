#include "main.h"

/**
* _strlen-> string lenght
* @s:...
* Return: string
*/
int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
length++;
return (length);
}

/**
* read_textfile-> reads a text file and prints posix
* @filename:...
* @letters: ..
* Return: 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t lettersb;
char *buffer;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);
if (read(fd, buffer, letters) == -1)
{
free(buffer);
return (0);
}
lettersb = _strlen(buffer);
lettersb = write(STDOUT_FILENO, buffer, lettersb);
if (lettersb == -1)
{
free(buffer);
return (0);
}
free(buffer);
return (close(fd) == -1 ? -1 : lettersb);
}
