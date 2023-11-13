#include "shell.h"

/**
*main - Shell entry loop
*@arc: argument count
*@argv: argument variables
*Return: Always 0
*/

int main(int arc, char **argv[])
{
/* function loop calls */
	(void)arc, (void)argv;
	void *YE_read_line(void);
	char **par_strtok(char *dir_str, const char *delim);
	int *fork_exe_wait(char **);
	/* function declarations */
	char *RD_LINE;
	char **PARSE_ARGS;
	int Status, indx;

	while (1)
	{
		RD_LINE = YE_read_line();
		if (RD_LINE == NULL)
		{
			perror(" Enter arguments");
			exit(0);
		}
		char *delim = " ";

		PARSE_ARGS = par_strtok(RD_LINE, delim);
		indx++;
		if (PARSE_ARGS == NULL)
		{
			perror("Error");
			free(RD_LINE);
			return (0);
		}
		(Status = (int)*fork_exe_wait(PARSE_ARGS));
		indx++;
		if ((int)Status == 0)
		{
			free(PARSE_ARGS);
			free(RD_LINE);
			return (0);
		}
		if (isatty(STDIN_FILENO) == -1)
		{
			write(1, "\n", 1);
			return (EXIT_SUCCESS);
		}
		return (0);
}
}

/**
*This - is our main.
*RD_LINE - read input from stream
*PARSE_ARGS - splits the input when delimi
*IS found and replaces it with \0
*Status - executes data comparing the builtin
*shell commands and assigned processes
*and free the static strings
*(RD_LINE & PARSE_ARGS)
*/
