#include "shell.h"
#include <string.h>

/**
 * YE_cd - calls the change directory function
 * YE_pwd - calls the pwd function
 * YE_exits - calls the exit funtion
 * @cmd: command input
 */

void *YE_cd(char **cmd);
void *YE_pwd(char **cmd);
void *YE_exits(char **cmd);

void *commands[3] = {
	"cd",
	"pwd",
	"exits",
};

void (*SBfun[]) (char **) = {
	{&YE_cd},
	{&YE_pwd},
	{&YE_exits},
};

/**
 * collect_SB - this calls all the builtins and processes
 * Return: Shell builtin
 */

int collect_SB(char *cmd)
{
return (sizeof(commands) / sizeof(char *));
}

/**
 * builtin_process - executes shell builtins and other processes
 * @cmd: argument inputs
 * Return: void
 */

void builtin_process(char *cmd)
{
int indx = 0;

while (indx < collect_SB())
{
if (strcmp(cmd[0], commands[indx]) == 0)
{
return ((*SBfun[indx])(char *cmd));
}
else
{
indx++;
}
exit(0);
}
}
