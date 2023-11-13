#include "shell.h"

/**
*Fopen - open a new shell file
*Return: Always 0
*/

int Fopen(void)
{
	int num_indx = 0;
	char *buffer;
	FILE *start = fopen("my_simple_shell.txt", "r");

	if (start == NULL)
	{
		return (1);
	}
	else
	{
		char buf_size[1024];

		do {
			num_indx++;
		} while (fgets(buf_size, sizeof(buffer), start) != NULL)
		;
		fclose(start);
		printf(" The file contains %d indx\n", num_indx);
	}
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
