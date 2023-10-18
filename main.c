#include "shell.h"
#include <stdbool.h>

/**
 * main - Entry point
 *@argc:number of arguments
 *@argv: pointer to array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char **command = NULL;
	char *line = NULL;
	int state = 0;
	(void) argc;

	while (true)
	{
		line = read_command();
		if (line == NULL)
		{
			if (isatty(STDIN_FILENO) == 1)
				write(STDOUT_FILENO, "\n", 1);
			return (state);
		}
		command = _split(line);
		if (command == NULL)
			continue;
		state = execute_command(command, argv);
	}
	return (0);
}
