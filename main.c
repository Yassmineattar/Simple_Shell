#include "shell.h"

/**
 * main - Entry point
 *@argc:number of arguments
 *@argv: pointer to array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *line = NULL;
	char **command = NULL;
	int state = 0;
	(void) argc;

	while (1)
	{
		line = read_command();
<<<<<<< HEAD
		if (line == NULL)//if CTRL+D entred EOF is reached
=======
		if (line == NULL)
>>>>>>> refs/remotes/origin/master
		{
			if (isatty(STDIN_FILENO) == 1)
				write(STDOUT_FILENO, "\n", 1);
			return (state);
<<<<<<< HEAD
		}
		free(line);
=======

		}
>>>>>>> refs/remotes/origin/master
		command = _split(line);
		if (!command)
			continue;
		state = _execute(command, argv);
	}
	return (0);
}
