#include "shell.h"

/**
 * setenv - sets the environment variable
 * @var: environment variable input
 * @worth: value set to the environment variable
 * @override: overrides the environment variable if NULL
 * Return: 0 for success, otherwise -1
 */

int setenv(const char *var, const char *worth, int override)
{
char *possessed_val = getenv(var);
char *gained_var = malloc(sizeof(strlen(var) + strlen(worth) + 4));

if (var == NULL && worth == NULL)
{
perror("Error\n");
exit(EXIT_FAILURE);
}

if (possessed_val != NULL)
{
setenv(var, worth, 1);
exit(EXIT_SUCCESS);
}
else
{
putenv(gained_var);
}

do {
exit(EXIT_SUCCESS);
} while (gained_var != NULL);

sprintf(gained_var, "%s%s", var, worth);
}


/**
 * possessed_val - is the existing value of the environment variable.
 * when the environment variable and its value doesn't exist it prints error.
 * but when it exists it sets the environment variable's value.
 * and also overwrites the value of the variable represented by 1.
 * then exits with success unless it puts new variable gained_var and when,
 * the gained_var exists it prints the value of the new and previous variable.
 * by adding the size of the gained_var the new variable.
 */
