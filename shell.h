#ifndef SHELL_H
#define SHELL_H
extern char **environ;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>
#include <sys/stat.h>
char *read_command(void);
char **_split(char *);
int execute_command(char **, char **);
char *_strdup(char *s);
int _strcmp(char *, char *);
int _strlen(char *);
char *_strcat(char *, char *);
char *_strcpy(char *, char *);
void freeing(char **);
#endif/*SHELL_H*/
