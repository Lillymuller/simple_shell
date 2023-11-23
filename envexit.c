#include "shell.h"

/**
* YE_exits - exits the process
* @EXIT_ARGS: command entered
* @read: command read input
* Return: Always 0
*/

void *YE_exits(char **EXIT_ARGS)
{
char *stat = NULL;
char str[1024];
char *abort = strtok(str, " ");

while (1)
{
write(1, "cisfun$ ", 8);
if (fgets(str, sizeof(str), stdin) == NULL)
{
break;
}
if (strcmp(abort, "Ctrl-D") == 0)
{
stat = YE_exits(EXIT_ARGS);
exit(*stat);
}
system(str);
if (stat != NULL)
{
printf("%s\n", stat);
}
free(EXIT_ARGS);
}
return (0);
}


/**
* YE_env - finds the path
* @env: command input
* @count: count input
* Return: Always 0
*/

char *YE_env(char **env, char *count)
{
int indx = 0;

for (indx = 0; env[indx] != 0; indx++)
{
if (strncmp(env[indx], count, strlen(count)) == 0)
{
return ((char *)(env[indx] + strlen(count) + 1));
}
}
return (0);
}

/**
* this - code shows the exit shell builtin
*command and "getenv()" system call that
*the enviroment information.
*/
