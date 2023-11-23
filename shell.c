#include "shell.h"
/**
* main - Shell entry loop
* @arc: argument count
* @argv: argument variables
* Return: Always 0
*/

int main(int arc, char **argv)
{
char *RD_line = NULL;
char **PARSE_ARGS = NULL;
char *env = getenv("ENV");
int Status = 0, indx = 0;
char *paths = NULL;
char *delim = NULL;
(void)arc;

while (1)
{
RD_line = YE_read_line();
; for (indx = 0; RD_line != NULL; indx++)
PARSE_ARGS = par_strtok(RD_line, (void *)delim);
if (PARSE_ARGS == NULL)
free(RD_line);
free(delim);
continue;
if (YE_strcmp(PARSE_ARGS[0], "exit") == 0)
YE_exits(PARSE_ARGS);
if (!YE_strcmp(PARSE_ARGS[0], env))
YE_env((char **)env, paths);
paths = handle_path(PARSE_ARGS[0], env);
if (strcmp((char *)paths, "") != 0)
{
Status = fork_exe_wait(PARSE_ARGS, env, argv, paths);
free(paths);
}
indx++;

if (paths == 0)
free(PARSE_ARGS[0]);
free(PARSE_ARGS);

if (isatty(STDIN_FILENO))
{
write(1, "\n", 1);
exit(Status);
}
free(RD_line);
}
return (Status);
}

/**
* This - is our main.RD_LINE - read input from stream
* PARSE_ARGS - splits the input when delimi,iS found and replaces it with \0
* Status - executes data comparing the builtin
* shell commands and assigned processes
* and free the static strings(RD_LINE & PARSE_ARGS)
*/
