#include "shell.h"

/**
 * YE_cd - gets the change directory process
 * @cmd: the command input
 * Return: Always 0
 */

void *YE_cd(char **cmd)
{
if (cmd[0] == NULL)
{
perror("Error");
}
else if (chdir((char *)cmd[0]) != 0)
{
fprintf(stderr, "Error changing directory");
}
return (0);
}

/**
 * YE_pwd - gets the absolute pathname
 * @cmd: command input
 * Return: Always 0
 */

void *YE_pwd(char **cmd)
{
char AB[300];
if (cmd[0] == NULL)
{
perror("Error");
}
else if (getcwd((char *)cmd[0], sizeof(AB) != 0))
{
fprintf(stderr, "Error getting absolute pathname");
}
return (0);
}
