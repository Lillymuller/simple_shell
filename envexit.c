#include "shell.h"

/**
* YE_exits - exits the process
<<<<<<< HEAD
* @status: checks the status of the exit function
* Return: Always 0
*/
void YE_exits(int status)
=======
* @cmd: it contain array of arguments
* @EXIT_ARGS: command enterd
* @Abort: it exits function
* Return: Always 0
*/
<<<<<<< HEAD
int YE_exits(char *cmd, char *EXIT_ARGS, int abort)
=======
int YE_exits(char **cmd, char *EXIT_ARGS, int abort)
>>>>>>> dd3dd803b8f2f11d1ad6d8c0d9b25a6300aca0cf
>>>>>>> ad378773b7726e94a0b50bdaea458eeca8277688
{
char *endptr;
if (!cmd[1])
{
free(cmd);
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
