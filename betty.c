#include "shell.h"

/**
*Fopen - open a new shell file
*Return: Always 0
*/

int Fopen(void)
{
	int indx = 0;
	char *buff;
	FILE *start = fopen("my_simple_shell.txt", "r");

	if (start == NULL)
	{
		return (0);
	}
	else
	{
		char buf_size[600];

		do {
			indx++;
		} while (fgets(buf_size, sizeof(buff), start) != NULL)
		;
		fclose(start);
		printf(" New file has %d indx\n", indx);
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
