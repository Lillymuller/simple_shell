#include "shell.h"

/**
 * YE_cd - calls the change directory function
 * YE_pwd - calls the pwd function
 * YE_exits - calls the exit funtion
 * @cmd: argument inputs
 * Return: void
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
	YE_cd,
	YE_pwd,
	YE_exits,
};

/**
 * collect_SB - this calls all the builtins and processes
 * @commands: argument input
 * Return: Shell builtin
 */

int collect_SB(char *commands)
{
return (sizeof(commands) / sizeof(char *));
free(commands);
}

/**
 * builtin_process - executes shell builtins and other processes
 * @cmd: argument inputs
 * Return: void
 */
int *builtin_process(char *cmd)
{
char **eco = NULL;
int indx = 0;
char **args = malloc(sizeof("cmd") + 1);
strcpy((char *)args[0], "cmd");

while (indx < collect_SB((char *)commands))
{
if (strcmp(cmd, commands[indx]) == 0)
{
return (SBfun[indx](&cmd));
indx++;
}
return (fork_exe_wait(args, eco));
}
free(args);
return (0);
}

/**
*This - code is a long one that shows
*a multiple functions or process.
*command[3] is an open array that holds three
* elements or arguments.
*SBfun[] is also an open arry that only holds three
*elements, it is holding address og the commands that
*we want to call back.
*collect_SB is a prototype thatcalls our shell builtin
* and process.
*the lat prototype builtin_process, this compaines
*our shell builtins and process. meaning that
*if the argument doesnt match the shell buitin commands
*given then it will run our process.
*/
