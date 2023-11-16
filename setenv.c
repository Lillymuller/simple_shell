#include "shell.h"

/**
 * setenv - sets the environment variable
 * @var: environment variable input
 * @worth: value set to the environment variable
 * @overwrite: overwrites the size of the variable
 * Return: 0 for success, otherwise -1
 */

int setenv(const char *var, const char *worth, int overwrite)
{
char *possessed_val = getenv(var);
char *gained_var = malloc(sizeof(strlen(var) + strlen(worth) + 4));

if (possessed_val == NULL)
{
perror("Error");
exit(EXIT_FAILURE);
}

if (possessed_val != NULL)
{
setenv(var, worth, overwrite);
exit(EXIT_SUCCESS);
}
else
{
putenv(gained_var);
}
sprintf(gained_var, "%s=%s", var, worth);

do {
perror("Error\n");
exit(EXIT_FAILURE);
} while (gained_var != NULL);

free(gained_var);
}

/**
 * possessed_val - is the existing value of the environment variable
 * if the existing value is NULL, then error is returned. if it is not NULL,
 * set the environment variable var with its value worth and exit with success
 * and overwrite its value otherwise assign new variable gained_var.
 * print the size of the existing and new variable with their value.
 * if the gained_var is NULL, print error and free the gained_var.
 */
