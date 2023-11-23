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
if(isatty(STDIN_FILENO) == 1)
{
write(1, "cisfun$ ", 8);
fflush(stdout);
}
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
printf("%s\n", env);
paths = handle_path(PARSE_ARGS[0], env);
if (strcmp((char *)paths, "") != 0)
{
fork_exe_wait((char **)paths, env, PARSE_ARGS);
free(paths);
}
perror("Error");
Status = (fork_exe_wait(PARSE_ARGS, env, argv));
indx++;
if ((int)Status == 0)
free(PARSE_ARGS[0]);
free(PARSE_ARGS);
free(RD_line);
return (0);
}
}

/**
* This - is our main.RD_LINE - read input from stream
* PARSE_ARGS - splits the input when delimi,iS found and replaces it with \0
* Status - executes data comparing the builtin
* shell commands and assigned processes
* and free the static strings(RD_LINE & PARSE_ARGS)
*/
