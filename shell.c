#include "shell.h"
/**
* main - Shell entry loop
* @arc: argument count
* @argv: argument variables
* Return: Always 0
*/
int main(int arc, char **argv)
{
	char *RD_line;
	char *PARSE_ARGS;
	int Status;
	char *env;
<<<<<<< HEAD
	int indx = 0
=======
	int indx = 0;
>>>>>>> e35bb2c006029136f72c6143f3e68cb029fa418e
	int paths = 0;
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

<<<<<<< HEAD
		if (RD_line != NULL)
		{
		indx++;
		}
		PARSE_ARGS = par_strtok(RD_line);
=======
	if (RD_line != NULL)
	{
		indx++;
	}
	PARSE_ARGS = par_strtok(RD_line);
>>>>>>> e35bb2c006029136f72c6143f3e68cb029fa418e
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
				free(PARSE_ARGS[0]);
			}
		}
<<<<<<< HEAD
		paths = handle_path(&PARSE_ARGS[0], env);
=======
		paths = handle_path(PARSE_ARGS[0], env);
>>>>>>> e35bb2c006029136f72c6143f3e68cb029fa418e
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
