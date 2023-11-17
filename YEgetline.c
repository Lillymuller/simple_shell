#include "shell.h"

/**
*YE_read_line - It reads from the stdin
*Return: read line
*/

void *YE_read_line(void)
{
	char *RD_LINE;
	char *prompt = "cisfun$ ";
	ssize_t line;
	size_t memo_size = 0;

	if (isatty(0))
	{
		write(1, prompt, 8);
	}

	line = (getline(&RD_LINE, &memo_size, stdin));
	if (line == -1)
	{
		free(RD_LINE);
		return (NULL);
	}
	return (RD_LINE);
}

/**
* RD_LINE - reads from the stream meaning stdin.
* the isatty function is used to check whether the file descrioptor
* refers to a terminal.
* memo_size: stores the allocated size in bytes.
* the two if and else if condition checks if the end of
* file has been reached.
*/

