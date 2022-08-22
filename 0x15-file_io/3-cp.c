#include "main.h"

/**
* error_method - method that deals with errors
* @x:...
* @file: ...
* Return: 97, 98, 99, or 100 depending on input num
*/
int error_method(int x, char *file)
{
int e;

switch (x)
{
case 97:
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
e = 97;
break;
case 98:
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
e = 98;
break;
case 99:
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
e = 99;
break;
default:
dprintf(STDERR_FILENO, "Error: Can't close fd %d", x);
e = 100;
break;
}
return (e);
}

/**
* main->coppies file content
* @argc: arguments count
* @argv: pointer
* Return:...
*/
int main(int argc, char **argv)
{
int fd_to, fd_from, read_val;
char *file_from, *file_to, buffer[BUFLEN];

if (argc != 3)
exit(error_method(97, NULL));
file_from = argv[1], file_to = argv[2];
fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
exit(error_method(98, file_from));
fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
exit(close(fd_from) == -1 ? error_method(fd_from, NULL) :
error_method(99, file_to));
read_val = read(fd_from, &buffer, BUFLEN);
while (read_val)
{
if (read_val == -1)
exit(close(fd_from) == -1 ? error_method(fd_from, NULL) :
close(fd_to) == -1 ? error_method(fd_to, NULL) :
error_method(98, file_from));
if (write(fd_to, &buffer, read_val) == -1)
exit(end_func(99, file_to));
read_val = read(fd_from, &buffer, BUFLEN);
}
return (close(fd_from) == -1 ? error_method(fd_from, NULL) :
close(fd_to) == -1 ? error_method(fd_to, NULL) : 0);
}
