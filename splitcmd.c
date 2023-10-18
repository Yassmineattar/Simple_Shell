#include "shell.h"
/**
 * _split -function that splits input
 *@line: commandline
 * Return:command splited
*/
char **_split(char *line)
{
	char *token = NULL, *cpy = NULL;
	const char *delimiters = " \t\n";
	int c = 0, i;
	char **cmd = NULL;

	if (line == NULL)
		return (NULL);
	cpy = _strdup(line);
	token = strtok(cpy, delimiters);
	if (token == NULL)
	{
		free(line), line = NULL;
		free(cpy), cpy = NULL;
		return (NULL);
	}
	while (token != NULL)
	{
		c++;
		token = strtok(NULL, delimiters);
	}
	free(cpy);
	cpy = NULL;
	cmd = malloc(sizeof(char *) * (c + 1));
	if (!cmd)
	{
		free(line), line = NULL;
		return (NULL);
	}
	token = strtok(line, delimiters);
	for (i = 0; i < c; i++)
	{
		cmd[i] = _strdup(token);
		token = strtok(NULL, delimiters);
	}
	free(line);
	line = NULL, cmd[i] = NULL;
	return (cmd);
}
