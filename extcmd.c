#include "shell.h"
/**
 * execute_command - execute a command with its arguments
 *@command: 2D array that contains the command
 *@argv: arguments entered
 * Return: statues
 */
int execute_command(char **command, char **argv)
{
	pid_t child_pid;
	int stat;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("fork");
		freeing(command);
		return (1);
	}
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
		waitpid(child_pid, &stat, 0);
		freeing(command);
	}
	return (WEXITSTATUS(stat));
}
