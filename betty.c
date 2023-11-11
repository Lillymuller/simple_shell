#include "shell.h"

/**
*Main - open a new shell file
*Return: Always 0
*/

int main(void)
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
