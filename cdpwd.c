#include "shell.h"

/**
 * YE_cd - converts the current working directory to a specific path.
 * @cmd: the changing path to a desired directory
 * Return: Always 0 when directory changes and -1 onthe diectory change fail.
 */

void *YE_cd(char **cmd)
{
if (cmd[0] == NULL)
{
perror("Error\n");
}
if (chdir(cmd[0]) != 0)
{
perror("Error\n");
}
free(cmd);
return (0);
}

/**
 * YE_pwd - gets the absolute pathname
 * @cmd: command input
 * Return: Always 0
 */

void *YE_pwd(char **cmd)
{
size_t AB = 300;
if (cmd[0] == NULL)
{
perror("Error");
}
if (getcwd(cmd[0], sizeof(AB) != 0))
{
fprintf(stderr, "Error getting absolute pathname");
}
free(cmd);
return (0);
}

/**
*This - is a code that gets change directory process
* and that shows the absolute pathname.
*we used the chdir() system call to get' cd'.
*and the getcwd() system call for 'pwd'.
*/
