#include "shell.h"

/**
*read_directive - reads commands from stream(stdin)
*Return: 0 if success, -1 if failure
*/

void *read_directive(void)
{
	int buffer_size = 1024;
	int indx = 0, a;
	char *buff = malloc(sizeof(char) * buffer_size);

	if (buff == NULL)
	{
		perror("Error\n");
		return (NULL);
	}

	do {
		a = getchar();
		for (; a != EOF && a != '\n'; a = getchar())
		{
			buff[indx++] = a;
		}
	} while (a != EOF && a != '\n');

	if (a == EOF)
	{
		buff[indx] = '\0';
		return (buff);
	}

	if (indx >= buffer_size)
	{
		buffer_size += 1024;
		buff = realloc(buff, buffer_size);
		if (buff == NULL)
			perror("Error");
		return (NULL);
	}
}
