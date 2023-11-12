#include "shell.h"

/**
 * fork_exe_wait - forks, execute and wait.
 * returns the exit status of the child process.
 * @cmd: this the arguments
 * @child_buf: this the memory space the child is stored
 * Return: Always 0
 */

int *fork_exe_wait(char *cmd, char *child_buf)
{
pid_t child_pid;
char *child_buf = 0;
int status;

child_pid = fork();

if (child_pid <= 0)
{
fprintf(stderr, "Error forking");
}
if (execvp(char *)(cmd[0], cmd) == -1)
{
	free((char *)cmd[0]);
	free(cmd);
	exit(EXIT_FAILURE);
}

while (WIFCONTINUED(status) && WIFSIGNALED(status) != 0)
{
	waitpid(child_pid, &status, WUNTRACED); /* wait(pid_t, int *, int) */
}
return (0);
}

/**
 * The code - forks the parent process and creats the child.
 * execvp() function is used for it takes two arguments
 * the name of the command to be executed and an array of
 * strings containing the command and its arguments.
 * execvp() function is used to replace the child process running
 * with a new process or program.
 * wait() function is used for the parent to wait for one of the
 * child process to end.
 * status parameter, returns the exit process of the exit status
 * of the child process.
 */
