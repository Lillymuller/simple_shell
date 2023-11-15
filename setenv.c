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
char *gained_var;
char *buff;

if (possessed_val != NULL && !overwrite)
{
exit(EXIT_SUCCESS);
}

gained_var = malloc(sizeof(strlen(var) + strlen(worth) + 4));
if (gained_var == NULL)
{
perror("Error\n");
exit(EXIT_FAILURE);
}

buff = malloc(sizeof(strlen(var) + strlen(worth) + 4));
if (buff == NULL)
{
perror("Error\n");
exit(EXIT_FAILURE);
}

strcpy(buff, gained_var);
putenv(buff);

free(gained_var);
free(buff);

return (0);
}
