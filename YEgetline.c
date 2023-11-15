#include "shell.h"

/**
*YE_read_line - It reads from the stdin
*Return: read line
*/

void *YE_read_line(void)
{
	char *RD_LINE;
	size_t memo_size = 0;

	int isatty(int fd);

	if (isatty(STDIN_FILENO) == -1)
	{
		write(1, "$ ", 3);
		return (EXIT_SUCCESS);
	}

	while (getline(&RD_LINE, &memo_size, stdin))
		;
	{
		if (feof(stdin) != '\0')
		{
			perror("RD_LINE");
			exit(EXIT_FAILURE);
		}
		else if (feof(stdin) == '\0')
		{
			free(RD_LINE);
		}
	}
	return (0);
}

/**
* RD_LINE: reads from the stream meaning stdin.
* memo_size: stores the allocated size in bytes.
* the two if and else if condition checks if the end of
* file has been reached.
*/

