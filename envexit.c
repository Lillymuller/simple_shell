#include "shell.h"

/**
*YE_exits - exits the process
*@cmd: command input
*Return: Always 0
*/
void *YE_exits(char **cmd)
{
<<<<<<< HEAD

	if (!cmd[0])
	{
	 free(cmd);
	 free(exit_buff);
	 exit(0);
	}
	else
	{
exit(*cmd[0]);
=======
int exits = 0;
int opp;

if (cmd[0] == NULL)
{
free(cmd);
exit(exits);
}
else
{
opp = *cmd[0];
free(cmd);
exit(opp);
>>>>>>> b7d1312198ced9dda2eb1ea43d85526445b47d3d
}
}

/**
*YE_env - finds the path
*@cmd: command input
*Return: Always 0
*/

void *YE_env(char **cmd)
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
