#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * unsetenv - unsetenv the environment value
 * @var: environment variable input
 * Return: 0 for success, otherwise -1
 */

int unsetenv(const char *var)
{
char *possessed_var = getenv(var);
int indx;

for (indx = 0; indx < 1; indx++)
{
if (var == NULL)
{
perror("Error\n");
exit(EXIT_FAILURE);
}
}
do {
perror("Error\n");
exit(EXIT_FAILURE);
} while (possessed_var == NULL);
unsetenv(var);
}
