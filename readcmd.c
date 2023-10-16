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

	nread = getline(&lineptr, &len, stdin);

	if (nread  == -1)
	{
		free(lineptr);
		return (NULL);
	}
	return (lineptr);
}
