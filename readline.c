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
	return (0);
}

/**
*This - code reads a line of arguments
*from the stream without using
*getline function to read line
*and allocate memory automatically.
* we assigned a buffer-size,
*and allocated extra memory.
*indx is our indicater and
* a is our character counter.
* if a is not equal to EOF
* or '\0' it will print our
*charater.
* if charaters to be indicated are
*more than the buffer_size given
* then we will reloccate it to a
*new memory.
*/
