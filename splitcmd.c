#include "shell.h"
/**
 * _split -function that splits input
 *@line: commandline
 * Return:command splited
*/
char **_split(char *line)
{
	char *token = NULL, cpy = NULL;
	const char *delimiters = " \t\n";
	int c = 0, i = 0;
	char **cmd = NULL;

	if (line == NULL)
		return (NULL);
	cpy = _strdup(line);
	token = strtok(cpy, delimiters);
	if (token == NULL)
	{
		free(line), line = NULL;
		free(tmp), tmp = NULL;
		return (NULL);
	}
	while (token != NULL)
	{
		c++;
		token = strtok(NULL, delimiters);
	}
	free(tmp), tmp = NULL;
	cmd = malloc(sizeof(char *) * (c + 1));
	if (cmd == NULL)
	{
		free(line);
		return (NULL);
	}
	token = strtok(line, delimiters);
	while (token != NULL)
	{
		cmd[i] = _strdup(token);
		token = strtok(NULL, delimiters);
		i++;
	}
	free(line);
	line = NULL;
	cmd[i] = NULL;
	return (cmd);
}
