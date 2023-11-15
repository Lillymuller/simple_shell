#include "shell.h"

/**
*YE_exits - exits the process
*@cmd: command input
*@exit_buff: memory for commmands
*Return: Always 0
*/
void *YE_exits(char **cmd, char **exit_buff)
{

	if (!cmd[0])
	{
	 free(cmd);
	 free(exit_buff);
	 exit(0);
	}
	else
	{
exit(*cmd[0]);
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
