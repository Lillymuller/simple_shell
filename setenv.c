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
free(gained_var);

putenv(buff);
free(buff);

return (0);
}


/**
 * possessed_val - is the existing value of the environment variable.
 * when the environment variable and its value doesn't exist it prints error.
 * but when it exists it sets the environment variable's value.
 * and also overwrites the value of the variable represented by 1.
 * then exits with success unless it puts new variable gained_var and when,
 * the gained_var exists it prints the value of the new and previous variable.
 * by adding the size of the gained_var the new variable.
 * and if the new variable doesn't exist it prints error and exits.
 */
