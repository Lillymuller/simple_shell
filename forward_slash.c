#include "shell.h"

/**
 * check_slash - checks if the dir starts with forward slash
 * @str: the checker string
 * Return: 0 for Success, 1 for Failure
 */

int check_slash(const char *str)
{
	if (str != NULL || str[0] == '/')
		return (1);

	return (0);
}
