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
	char *parsed;
	char *org_path;
	pid_t child_pid;
	size_t memo_size;
	ssize_t get_line;
	int i = 0;
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
			exit(0);
		}
		parsed = strtok(RD_line, " \n");
		val = malloc(sizeof(char *) * 1024);
		while (parsed)
		{
			val[i] = parsed;
			parsed = strtok(NULL, " \n");
			i++;
		}
		val[i] = NULL;
		org_path = get_path(val[0]);
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Failed to create child_pid");
			exit(50);
		}
		if (child_pid == 0)
		{
			if (execve(org_path, val, NULL) == -1)
			{
				perror("Failed to execute");
				exit(87);
			}
		}
		else
			wait(&Status);
	}

	free(org_path);
	free(RD_line);
	return (0);
}
