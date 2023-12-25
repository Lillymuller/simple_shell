#include "shell.h"

/**
 * get_path - gives the full path of the file
 * @new_file: argument command
 * Return: full path argument of the file
 */

char *get_path(char *new_file)
{
	char *org_path = getenv("PATH");
	char *abs_path;

	if (!org_path)
	{
		perror("Path not found");
		return (NULL);
	}
	abs_path = get_location(org_path, new_file);

	if (abs_path == NULL)
	{
		write(2, new_file, strlen(new_file));
		write(2, ": command not found\n", 19);
		return (NULL);
	}
	return (abs_path);
}
