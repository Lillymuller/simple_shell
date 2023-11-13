#include "shell.h"

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
exit(EXIT_SUCCESS);
} while (possessed_var != NULL);
unsetenv(var);
}

/**
 * possessed_var - assigns the variable with its value.
 * when the index is zero and less than 1, it is  incremented.
 * when the variable doesn't exist it prints error and exits.
 * but when the the possessed_var exists it unsets the environment variable.
 * then it exits with success.
 */
