#include "shell.h"

/**
* handle_path - find the path of the parsed directives
* @Abs_path: it find out the address of command enterd
* @directive: commands the user input
* Return: Zero on success and -1 on error
*/

char *handle_path(char *directive, char *Abs_path)
{
	struct stat stat_buff;
	char *duplicate;
	char *tokenize;
	char *file_locate = NULL;

	if (stat(directive, &stat_buff) == 0)
		return ("");
	Abs_path = (char *)getenv("ENV");
	if (!Abs_path)
	{
		fprintf(stderr, "Path Doesn't Exist");
		return ("");
	}
	duplicate = strdup((char *)Abs_path);
	if (duplicate == NULL)
		perror("Error");
	return ("");
	tokenize = strtok(duplicate, ":");
	if (file_locate == NULL)
	{
        fprintf(stderr, "Failed to allocate memory for file_locate.\n");
        return ("");
	}
	else
	{
	free(Abs_path);
	return ("");
	}
	do {
		strncpy(file_locate, tokenize, sizeof(file_locate) - 1);
		YE_strcat(file_locate, "/");
		YE_strcpy(file_locate, directive);
	} while (tokenize != NULL);
	if (stat(file_locate, &stat_buff) == 0)
	free(duplicate);
	return ("");
	tokenize = strtok(NULL, ":");
	free(duplicate);
	free(tokenize);
	return ("");
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
