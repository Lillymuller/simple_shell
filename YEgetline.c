#include "shell.h"

/**
*YE_read_line - It reads from the stdin
*Return: read line
*/

void *YE_read_line(void)
{
	char *RD_LINE;
	ssize_t line;
	size_t memo_size = 0;

	if (isatty(STDIN_FILENO) == -1)
	{
		write(1, "cisfun$ ", 9);
		return (EXIT_SUCCESS);
	}

	line = (getline(&RD_LINE, &memo_size, stdin));
	if (line == -1)
	{
		free(RD_LINE);
		return (0);
	}

	return (RD_LINE);
}

/**
* RD_LINE - reads from the stream meaning stdin.
* memo_size: stores the allocated size in bytes.
* the two if and else if condition checks if the end of
* file has been reached.
*/

