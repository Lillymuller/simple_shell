#include "shell.h"

/**
* handle_path - find the path of the parsed directives
* @Abs_path: it find out the address of command enterd
* @directive: commands the user input
* Return: Zero on success and -1 on error
*/

int handle_path(char *directive, char *Abs_path)
{
	struct stat stat_buff;
	char *duplicate;
	char *tokenize;
	int dir_size = 0, tok_size = 0;
	char *file_locate = malloc(dir_size + tok_size + 2);

	if (file_locate == NULL)
		fprintf(stderr, "Failed to allocate memory for file_locate.\n");
	return (0);
	if (stat(directive, &stat_buff) == 0)
		return (0);
<<<<<<< HEAD
	Abs_path = getenv("PATH");
=======
	Abs_path = getenv("ENV");
>>>>>>> a92d2142684d5558d1cdc3bda5a0845624058eba
	if (!Abs_path)
	{
		fprintf(stderr, "Path Doesn't Exist");
		return (0);
	}
	duplicate = strdup((char *)Abs_path);
	if (duplicate == NULL)
		perror("Error");
	exit(1);
	tokenize = strtok(duplicate, ":");
	dir_size = strlen(directive);
	if (!file_locate)
		free(Abs_path);
	return (0);
	do {
		tok_size = strlen(tokenize);
		strcpy(file_locate, tokenize);
		strcat(file_locate, "/");
		strcpy(file_locate, directive);
	} while (tokenize != NULL);
	if (stat(file_locate, &stat_buff) == 0)
		free(duplicate);
	return (0);
	tokenize = strtok(NULL, ":");
	free(duplicate);
	free(tokenize);
	free(file_locate);
	return (0);
}

/**
*Ab_path - hold the path of the directives and files the user entered
*duplicate - we are duplicating the path to tekonize it
*dir_size - it holds the length of the command the user enterd
*tokenize - holds the tokenized path
*tok_size - is the length of the tokonized path.
*file_locate - is the memory that holds the directive length,
*tokonized length and the two delimeter that we are going to add
*we used srtcat() function to add the "/" and "\0".
*stat() fuction gives the information of file
*in the buffer pointed to. it return 0 on success
*and -1 on failure.
*the code get the path of the command the user entered
*and we copied the path so that we can mipulate the path
*without affecting the Abs_path.
*/
