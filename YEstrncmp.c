#include "shell.h"

/**
 * YE_strncmp - compares this two strings
 * @x: first string
 * @y: second string
 * Return: 0 on Success
 */

void *YE_strncmp(char *x, char *y)
{
int a = 0;
int b = 0;
int s = 0;

while (x[b] != '\0' || b < s)
{
a = x[b] - y[b];
b++;

if (a != 0)
{
exit(s);
}
}
return (0);
}
