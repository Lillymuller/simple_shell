#include "shell.h"

/**
 * setenv - sets the environment variable
 * @var: environment variable input
 * @worth: value set to the environment variable
 * @overwrite: overwrites the value of var when it exists
 * Return: 0 for success, otherwise -1
 */

int setenv(const char *var, const char *worth, int overwrite)
{
char *possessed_val = getenv(var);
char *gained_var = malloc(sizeof(strlen(var) + strlen(worth) + 4));

if (var == NULL)
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
sprintf(gained_var, "%s%s", var, worth);

do {
perror("Error\n");
exit(EXIT_FAILURE);
} while (gained_var == NULL);

free(gained_var);
}
