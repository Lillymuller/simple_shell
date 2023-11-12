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

void *(*SBfun[]) (char **) = {
	&YE_cd,
	&YE_pwd,
	&YE_exits
};

/**
 * collect_SB - this calls all the builtins and processes
 * Return: Shell builtin
 */

int collect_SB(char *cmd)
{
return (sizeof(commands) / sizeof(commands[0]));
}

/**
 * builtin_process - executes shell builtins and other processes
 * @cmd: argument inputs
 * Return: void
 */
int *builtin_process(char *cmd)
{
int indx = 0;
char *args[] = {cmd};

while (indx < collect_SB(cmd))
{
if (strcmp(cmd, commands[indx]) == 0);
{
return (SBfun[indx](&cmd));
indx++;
}
return (fork_exe_wait(args));
}
return (0);
}
