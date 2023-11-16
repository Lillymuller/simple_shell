#include "shell.h"

/**
* YE_exits - exits the process
* @cmd: command input
* Return: Always 0
*/
int YE_exits(char **cmd)
{
int EXIT_ARGS = 0;
int abort = 0;
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
* @cmd: command input
* Return: Always 0
*/

int YE_env(char **cmd)
{
	int indx = 0;
	int count = 0;

	if (cmd[indx] == NULL)
	{
		perror("Error finding the path....");
	}
	else
	{
		write(1, cmd[indx], count);
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
