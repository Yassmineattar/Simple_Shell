#include "shell.h"

/**
 * _strdup - fctn that duplicates a string.
 * @str: string input
 * Return: a pointer that containes a copy of str if success NULL otherwise
 */
char *_strdup(char *str)
{
	char *d;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	while (str[l] != '\0')
		l++;

	d = malloc(sizeof(char) * (l + 1));

	if (d == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		d[i] = str[i];

	d[i] = '\0';

	return (d);
}

/**
 * _strcmp - Compares two strings
 * @s1: first str
 * @s2: second str
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/**
 * _strlen - returns the length of a string
 * @s: The input string
 *
 * Return: The length of the input string
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

/**
 * _strcat - Concatenates two strings.
 * @d: The destination str
 * @s: The source str to be appended
 * Return: A pointer to the resulting string
 */
char *_strcat(char *d, char *s)
{
	int i = 0;
	int j = 0;

	while (d[i] != '\0')
	{
		i++;
	}

	while (s[j] != '\0')
	{
		d[i] = s[j];
		i++;
		j++;
	}

	d[i] = '\0';
	return (d);
}

/**
 * _strcpy -copies a string
 * @d: The destination str
 * @s: The source str to be copied
 *
 * Return: A pointer to the destination string
 */
char *_strcpy(char *d, char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}

	d[i] = '\0';
	return (d);
}

