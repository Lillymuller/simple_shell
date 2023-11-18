#include "shell.h"

/**
* YE_exits - exits the process
* @EXIT_ARGS: command entered
* Return: Always 0
*/

void *YE_exits(char **EXIT_ARGS)
{
char *status = NULL;
char str[100];
char *abort = strtok(str, " ");

while (1)
{
write (1, "cisfun$ ", 8);
if (fgets(str, sizeof(str), stdin) == NULL)
{
break;
}
if (strcmp(abort, "Ctrl-D") == 0)
{
status = YE_exits(EXIT_ARGS);
exit(*status);
}
system(str);
if (status != NULL)
{
printf("%s\n", status);
}
}
return (0);
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

	if (env[indx] == '\0')
	{
		perror("Error finding the path....");
	}
	else
	{
		write(1, &env[indx], count);
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
