#include "shell.h"

/**
 * YE_strcat - prints the string input
 * @field: states the destination of a string
 * @tank: states the storage of the string
 * Return: destination of the string
 */

void *YE_strcat(char *field, char *tank)
{
int a = 0;
int b = 0;

while (field[a] != '\0' || tank[b] != '\0')
{
	if (tank[b] != '\0')
	{
		field[a + b] = tank[b];
		b++;
	}

if (field[a] != '\0')
{
	field[a] = tank[b];
	b++;
}
a++;
}
return (field);
}
