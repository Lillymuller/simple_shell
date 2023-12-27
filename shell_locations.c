#include "shell.h"

/**
* get_location - gives executable path of file
* @org_path: original path
* @new_file: executable file
* Return: absolute path to the executable file
*/

char *get_location(char *org_path, char *new_file)
{
char *dup_path;
char *parsed;
struct stat file_path;
char *path_memo = NULL;

dup_path = strdup(org_path);
parsed = strtok(dup_path, ":");

while (parsed)
{
if (path_memo)
{
path_memo = NULL;
}
path_memo = malloc(strlen(parsed) + strlen(new_file) + 2);
if (!path_memo)
{
perror("Error: malloc failed");
exit(EXIT_FAILURE);
}
strcpy(path_memo, parsed);
strcat(path_memo, "/");
strcat(path_memo, new_file);
strcat(path_memo, "\0");
if (stat(path_memo, &file_path) == 0 && access(path_memo, X_OK) == 0)
{
path_memo = strdup(new_file);
if (!path_memo)
	return (NULL);
printf("Absolute Executable Path: %s\n", path_memo);
return (path_memo);
}
free(path_memo);
parsed = strtok(NULL, ":");
}
free(dup_path);
return (NULL);
}
