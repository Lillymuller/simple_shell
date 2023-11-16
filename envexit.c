#include "shell.h"

/**
* YE_exits - exits the process
* @cmd: it contain array of arguments
* @EXIT_ARGS: command enterd
* @Abort: it exits function
* Return: Always 0
*/
int YE_exits(char **cmd, char *EXIT_ARGS, int abort)
{
char *endptr;
if (!cmd[1])
{
free(cmd);
exit(abort);
}
else
{
EXIT_ARGS = strtol(cmd[1], &endptr, 10);
}
free(cmd);
exit(EXIT_ARGS);
}

/**
* YE_env - finds the path
* @env: command input
* Return: Always 0
*/

int YE_env(char **env)
{
	int indx = 0;
	int count = 0;

	if (env[indx] == NULL)
	{
		perror("Error finding the path....");
	}
	else
	{
		write(1, env[indx], count);
		write(1, "\n", 1);
	}
	free(cmd);
	return (0);
}

/**
* this - code shows the exit shell builtin
*command and "getenv()" system call that
*the enviroment information.
*/
