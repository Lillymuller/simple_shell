#include "shell.h"

/**
 * main - runs the shell function
 * @argc: argument count
 * @argv: array of argument values
 * Return: 0 Always Success
 */

int main(int argc, char *argv[])
{
	char *RD_line = NULL;
	char *RD_dup = NULL;
	char *parsed;
	char *org_path;
	pid_t child_pid;
	size_t memo_size;
	ssize_t get_line;
	int i = 0, j;
	int Status;
	char **val;
	(void)argc, (void)argv;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "Cisfun$ ", 8);
		get_line = getline(&RD_line, &memo_size, stdin);
		if (get_line == -1)
		{
			exit(-1);
		}
		RD_dup = malloc(sizeof(char) * get_line);
		if (RD_dup == NULL)
		{
			perror("Error: memory allocation");
			return (-1);
		}
		strcpy(RD_dup, RD_line);

		parsed = strtok(RD_line, " \n");
		while (parsed)
		{
			i++;
			parsed = strtok(NULL, " \n");
		}
		i++;

		val = malloc(sizeof(char *) * i);
		parsed = strtok(RD_dup, " \n");

		for (j = 0; parsed != NULL; j++)
		{
			val[j] = malloc(sizeof(char) * strlen(parsed));
			strcpy(val[j], parsed);
			parsed = strtok(NULL, " \n");
		}
		val[j] = NULL;

		org_path = get_path(val[0]);
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Failed to create child_pid");
			exit(50);
		}
		if (child_pid == 0)
		{
			printf("The creation was successful\n");
			if (execve(org_path, val, NULL) == -1)
			{
				perror("Failed to execute");
				exit(87);
			}
		}
		else
			wait(&Status);
	}
	free(RD_dup);
	free(val);
	free(org_path);
	free(RD_line);
	return (0);
}
