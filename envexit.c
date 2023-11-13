#include "shell.h"


/**
*YE_exits - exits the process
*@cmd: command input
*Return: Always 0
*/
void *YE_exits(char **cmd)
{
	fprintf(stderr, "Exiting process ....");
	exit(0);
}



/**
*YE_env - finds the path
*@cmd: command input
*Return: Always 0
*/

void *YE_env(char **cmd)
{
	char *envir = getenv("PATH");

	if (cmd[0] == NULL)
	{
		perror("Error finding the path....");
	}
	else
	{
		printf("%s", envir);
	}
	return (0);
}

/**
* this - code shows the exit shell builtin
*command and "getenv()" system call that
*the enviroment information.
*/
