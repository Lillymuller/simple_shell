#include "shell.h"

/**
 * unsetenv - unsetenv the environment value
 * @var: environment variable input
 * Return: 0 for success, otherwise -1
 */

int unsetenv(const char *var)
{
char *possessed_val = getenv(var);
int indx;

for (indx = 0; indx < 1; indx++)
{
if (possessed_val == NULL)
{
perror("Error\n");
exit(EXIT_FAILURE);
}
}
do {
exit(EXIT_SUCCESS);
} while (possessed_val != NULL);
unsetenv(var);
}

/**
 * possessed_val - assigns the value of the environment variable (var).
 * when the index is zero and less than 1, it is  incremented.
 * when the variable doesn't exist it prints error and exits.
 * but when the the possessed_val exists it unsets the environment variable.
 * then it exits with success.
 */
