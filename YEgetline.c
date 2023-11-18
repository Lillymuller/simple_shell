#include "shell.h"

/**
*YE_read_line - It reads from the stdin
*Return: read line
*/

char *YE_read_line(void)
{
	char *RD_LINE;
	char *prompt = "cisfun$ ";
<<<<<<< HEAD
	ssize_t line = 0;
=======
>>>>>>> a92d2142684d5558d1cdc3bda5a0845624058eba
	size_t memo_size = 0;

	if (isatty(STDIN_FILENO) == 1)
	{
		write(1, prompt, 8);
	}

<<<<<<< HEAD
	line = (getline(&RD_LINE, &memo_size, stdin));
	if (line == -1)
=======
	if (getline(&RD_LINE, &memo_size, stdin) == -1)
>>>>>>> a92d2142684d5558d1cdc3bda5a0845624058eba
	{
		free(RD_LINE);
		return (NULL);
	}
<<<<<<< HEAD
	return (RD_LINE);
=======
	return (0);
>>>>>>> a92d2142684d5558d1cdc3bda5a0845624058eba
}

/**
* RD_LINE - reads from the stream meaning stdin.
* the isatty function is used to check whether the file descrioptor
* refers to a terminal.
* memo_size: stores the allocated size in bytes.
* the two if and else if condition checks if the end of
* file has been reached.
*/

