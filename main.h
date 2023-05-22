#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>
#include <errno.h>

#define MAX_COMMAND_LENGTH 256

extern char **environ;

int _putchar(char c);
void print_prompt(void);
int parse_input(char *input, char **args);

/* exec.c file */
int check_executable(char *executable);
void execute_command(char **argv, char **envp);
char *findCommandDirectory(const char *command);
/* fork.c file */
void fork_process(char **args, char **envp);

/* run_shell.c file */
void run_shell(char **argv _attribute_((unused)), char **envp);

/* stings.c file */
void _strcpy(char *dest, const char *src);
char *_strcat(char *dest, const char *src);
size_t _strlen(const char *str);
int _strncmp(const char *str1, const char *str2, size_t n);
char *_strdup(const char *str);

/* _getenv.c file */
char *_getenv(const char *name);

#endif
