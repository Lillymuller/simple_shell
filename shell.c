#include "shell.h"
/**
* main - Shell entry loop
* @arc: argument count
* @argv: argument variables
* Return: Always 0
*/
int main(int arc, char *argv)
{
	char *RD_line;
	char **PARSE_ARGS;
	int paths;
	char *env;
	int indx = 0;
	int Status;
	(void)arc;

	while (1)
	{
	if (isatty(STDIN_FILENO))
	{
		write(1, "\n", 1);
		exit(Status);
	}
	else
	{
	RD_line = YE_read_line();

	if (RD_line != NULL)
	{
		indx++;
	}
	PARSE_ARGS = par_strtok(RD_line);

	if (PARSE_ARGS == NULL)
		{
			free(RD_line);
			continue;
		}
		if (YE_strcmp(PARSE_ARGS[0], "exit") == 0 || YE_strcmp
		(PARSE_ARGS[1], "exit\n") == 0)
		{
			YE_exits(PARSE_ARGS, RD_line, Status);
			free(PARSE_ARGS[indx]);
			if (!YE_strcmp(PARSE_ARGS[0], "env"))
			{
				YE_env(env);
				free((char *)PARSE_ARGS[0]);
			}
		}
		paths = handle_path((char *)PARSE_ARGS[0], env);
		Status = (fork_exe_wait(PARSE_ARGS, env, argv));
		indx++;
		if ((int)Status == 0)
		{
			free(PARSE_ARGS[0]);
			free(PARSE_ARGS);
			free(RD_line);
		}
	}
	}
	return (0);
}


/**
*This - is our main.RD_LINE - read input from stream
*PARSE_ARGS - splits the input when delimi,iS found and replaces it with \0
*Status - executes data comparing the builtin
*shell commands and assigned processes
*and free the static strings(RD_LINE & PARSE_ARGS)
*/
