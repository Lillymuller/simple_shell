#include "shell.h"

/**
* YE_exits - exits the process
* @EXIT_ARGS: command entered
* Return: Always 0
*/

void *YE_exits(char **EXIT_ARGS)
{
char *endptr;
char *status[] = NULL;
int abort = 0;
if (!status[1])
{
exit(abort);
}
else
{
EXIT_ARGS = strtol(status[1], &endptr, 10);
}
exit((char **)EXIT_ARGS);
}

/**
* YE_env - finds the path
* @env: command input
* Return: Always 0
*/

int YE_env(char *env)
{
        char *indx = NULL;
	int count = 0;

	if (env[indx] == 0)
	{
		perror("Error finding the path....");
	}
	else
	{
		write(1, env[indx], count);
		write(1, "\n", 1);
	}
	free(env);
	return (0);
}

/**
* this - code shows the exit shell builtin
*command and "getenv()" system call that
*the enviroment information.
*/
