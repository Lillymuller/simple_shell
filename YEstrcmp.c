#include "shell.h"

/**
 * YE_strcmp - compares the string input
 * @x: the first string
 * @y: the second string
 * Return: void
 */

void *YE_strcmp(char *x, char *y)
{
int indx = 0;

while (x[indx] == y[indx] && x[indx] != '\0')
{
indx++;
}

exit(0);
}
