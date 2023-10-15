#include <stdio.h>

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
		if (line == NULL)//if CTRL+D entred EOF is reached
			return (state);
		command = _split(line);
		state = _execute(command, argv);
	}
	return (0);
}
