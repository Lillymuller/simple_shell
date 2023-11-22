#include "shell.h"

/**
* YE_read_line - It reads from the stdin
* Return: Always 0
*/

char *YE_read_line(void)
{
	char *RD_LINE = NULL;
	size_t memo_size = 0;
	int indx = 0;

	if (getline(&RD_LINE, &memo_size, stdin) == -1)
	printf("%s\n", RD_LINE);
	indx++;
	free(RD_LINE);
	RD_LINE = NULL;

	free(RD_LINE);
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

