#include "shell.h"

/**
 * call_back - calls back the functions
 * @x: argument inputs
 * Return: void
 */

void *call_back(char **x)
{
void *YE_cd(char **cmd);
void *YE_pwd(char **cmd);
void *YE_exits(char **EXIT_ARGS);

char *commands[3] = {
	"cd\0",
	"pwd\0",
	"exits\0",
};

void *(*SBfun[]) (char **) = {
	&YE_cd,
	&YE_pwd,
	&YE_exits,
};

int collect_SB(void);

return ((void *)(sizeof(commands) / sizeof(char *)));

free(x);
free(SBfun);
return (0);
}

/**
 * builtin_process - executes shell builtins and other processes
 * @cmd: argument inputs
 * Return: void
 */
int builtin_process(char *cmd)
{
char *eco = NULL;
char **argvs = NULL;
int indx = 0;
char **x = NULL;
char **args = malloc(sizeof("cmd") + 1);

void *(*SBfun[3]) (char **);

strcpy(args[0], "cmd");
while (call_back((char **)x) != NULL)
{
if (strcmp(cmd, x[indx]) == 0)
{
return ((long)(void *)(*(SBfun[indx]))(&cmd));
indx++;
}

return (fork_exe_wait(args, eco, argvs));
}
free(args);
free(eco);
free(argvs);
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
