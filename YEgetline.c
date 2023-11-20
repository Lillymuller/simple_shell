#include "shell.h"

/**
*YE_read_line - It reads from the stdin
*Return: read line
*/

char *YE_read_line(void)
{
	char *RD_LINE = NULL;
	char *prompt = "cisfun$ ";
	size_t memo_size = 1024;

	if (isatty(STDIN_FILENO) == 1)
	{
		write(1, prompt, 8);
	}

	if (getline(&RD_LINE, &memo_size, stdin) == -1)
	{
		free(RD_LINE);
		return (NULL);
	}
	return (0);
}

/**
* RD_LINE - reads from the stream meaning stdin.
* the isatty function is used to check whether the file descrioptor
* refers to a terminal.
* memo_size: stores the allocated size in bytes.
* the two if and else if condition checks if the end of
* file has been reached.
*/

