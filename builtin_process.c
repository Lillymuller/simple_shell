#include "shell.h"

/**
 * call_back - calls back the functions
 * @commands: argument inputs
 * Return: void
 */

<<<<<<< HEAD
int YE_cd(char *cmd);
int YE_pwd(char *cmd);
int YE_exits(char *cmd, char *EXIT_ARGS, int Abort);

char *commands[3] = {
	"cd",
	"pwd",
	"exits",
};
=======
int call_back(char *commands)
{
commands[3] = {"cd", "pwd", "exits"};
>>>>>>> ad378773b7726e94a0b50bdaea458eeca8277688

int (*SBfun[]) (char **) = {YE_cd, YE_pwd, YE_exits};

return (sizeof(commands) / sizeof(char *));

free(commands);
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
char arg = NULL;
int indx = 0;
char *args = malloc(sizeof("cmd") + 1);
strcpy((char *)args[0], "cmd");

while (indx < call_back((char *)commands))
{
if (strcmp(cmd, commands[indx]) == 0)
{
return (SBfun[indx](&cmd));
indx++;
}
return (fork_exe_wait(args, eco, arg));
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
