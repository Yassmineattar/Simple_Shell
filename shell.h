#ifndef SHELL_H
#define SHELL_H
extern char **environ;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>
#include <sys/stat.h>
char *read_command(void);
char **_split(char *line);
int _execute(char **command, char **argv);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
void freeing(char **array_2d);
#endif/*SHELL_H*/
