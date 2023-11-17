#include "shell.h"

/**
* YE_exits - exits the process
* @status: checks the status of the exit function
* @EXIT_ARGS: command entered
* Return: Always 0
*/

int YE_exits(char *EXIT_ARGS, int status)
{
char *endptr;
<<<<<<< HEAD
int abort = 0;
=======
int Abort = 0;
>>>>>>> e35bb2c006029136f72c6143f3e68cb029fa418e
if (!status[1])
{
exit(abort);
}
else
{
EXIT_ARGS = strtol(status[1], &endptr, 10);
}
exit(EXIT_ARGS);
}

/**
* YE_env - finds the path
* @env: command input
* Return: Always 0
*/

int YE_env(char *env)
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
	free(env);
	return (0);
}

/**
* this - code shows the exit shell builtin
*command and "getenv()" system call that
*the enviroment information.
*/
