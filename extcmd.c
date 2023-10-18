#include "shell.h"
int _execute(char **command, char **argv)
{
	pid_t child_pid;
	int status;

	child_pid = fork();
	if (child_pid == 0)
	{
		if (execve(command[0], command, environ) == -1)
		{
			perror(argv[0]);/*error handling*/
			freeing(command);
			exit(1);
		}
	}
	else
	{
		waitpid(child_pid, &status, 0);
		freeing(command);
	}
	return (WEXITSTATUS(status));
}
