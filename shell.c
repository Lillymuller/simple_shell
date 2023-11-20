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
char *paths = NULL;
char *env = getenv("ENV");
int Status = 0, indx = 0;
char *new_env = malloc(strlen(env) + strlen(paths) + 2);
char *delimiters = 0;
char *envPtr = 0;
(void)arc;
while (1)
{
if (isatty(STDIN_FILENO))
write(1, "\n", 1);
exit(Status);
RD_line = YE_read_line();
; for (indx = 0; RD_line != NULL; indx++)
PARSE_ARGS = par_strtok(RD_line, (void *)delimiters);
if (PARSE_ARGS == NULL)
free(RD_line);
free(delimiters);
continue;
if (YE_strcmp(PARSE_ARGS[0], "exit") == 0 || YE_strcmp
(PARSE_ARGS[1], "exit\n") == 0)
YE_exits(PARSE_ARGS);
free(PARSE_ARGS[indx]);
if (!YE_strcmp(PARSE_ARGS[0], "env"))
YE_env((void *)envPtr);
free(PARSE_ARGS[0]);
paths = handle_path(PARSE_ARGS[0], env); {
strcpy(new_env, env);
strcat(new_env, "/");
putenv(new_env); }
Status = (fork_exe_wait(PARSE_ARGS, env, argv));
indx++;
if ((int)Status == 0)
free(PARSE_ARGS[0]);
free(PARSE_ARGS);
free(RD_line);
free(new_env);
}
return (0); }


/**
* This - is our main.RD_LINE - read input from stream
* PARSE_ARGS - splits the input when delimi,iS found and replaces it with \0
* Status - executes data comparing the builtin
* shell commands and assigned processes
* and free the static strings(RD_LINE & PARSE_ARGS)
*/
