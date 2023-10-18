#include "shell.h"
/**
 * read_command - function that reads command line from stdin
 * Return: string
 */
char *read_command(void)
{
	char *lineptr = NULL;
	size_t len = 0;
	ssize_t nread;

	if (isatty(STDIN_FILENO) == 1)/*checks if its on terminal*/
		write(STDOUT_FILENO, "$ ", 2);
	nread = getline(&lineptr, &len, stdin);
	if (nread  == -1) /* when error occured it returns -1*/
	{
		free(lineptr);
		return (NULL);
	}
	return (lineptr);
}
