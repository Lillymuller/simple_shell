#include "shell.h"

/**
 * fork_exe_wait - forks, execute and wait.
 * returns the exit status of the child process.
 * @cmd: this the arguments
 * @eco: this is the enviroment.
 * @arg: argument entered.
 * Return: Always 0
 */

int fork_exe_wait(char **cmd, char *eco, char *arg)
{
pid_t child_pid;
int status;

child_pid = fork();

if (child_pid <= 0)
{
perror("Error\n");
}
if (execve(cmd[0], cmd, eco) == -1)
{
	free(cmd[0]);
	free(cmd);
	free(eco);
	exit(EXIT_FAILURE);
}
else
{
wait(&status);

if (WIFEXITED(status) && WEXITSTATUS(status) != 0)
{
	return (WEXITSTATUS(status));
}
return (0);
}
}

/**
 * The code - forks the parent process and creats the child.
 * execve() function is used for it takes two arguments
 * the name of the command to be executed and an array of
 * strings containing the command and its arguments.
 * execvp() function is used to replace the child process running
 * with a new process or program.
 * wait() function is used for the parent to wait for one of the
 * child process to end.
 * status parameter, returns the exit process of the exit status
 * of the child process.
 */
