#include "shell.h"

/**
*Fopen - open a new shell file
*Return: Always 0
*/

int Fopen(void)
{
	int indx = 0;
	char *start = (char *)fopen("my_simple_shell.txt", "r");
	size_t buff;

	if (start == NULL)
	{
		return (0);
	}

		do {
			indx++;
		} while (getline(&start, &buff, stdin) != 0)
		;
		fclose((FILE *)start);
		printf(" New file has %d indx\n", indx);

	return (0);
}

/**
 * start - begins the opening of a file in read mode, if the file exists.
 * otherwise it will create a new file with read mode.
 * it allocates memory with buff_size because we are using fgets() function.
 * it closes the opened file and prints the number of charcters,
 * used in the file.
 * then returns zero.
 */
