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
#define BUFFER_SIZE 1024
#define INITIAL_BUFFER_SIZE 64

extern char **environ;

/* puts.c file */
int _putchar(char c);
void _puts(const char *str);

void print_prompt(void);
int parse_input(char *input, char **args);

/* exec.c file */
int check_executable(char *executable);
void execute_command(char **argv, char **envp);
char *find_command_directory(const char *command);

/* fork.c file */
void fork_process(char **args, char **envp);

/* run_shell.c file */
void run_shell(char **argv __attribute__((unused)), char **envp);
void handle_input(char *input, char **args, char **envp);
ssize_t read_input(char **input, size_t *input_len);

/* stings.c file */
void _strcpy(char *dest, const char *src);
char *_strcat(char *dest, const char *src);
size_t _strlen(const char *str);
int _strncmp(const char *str1, const char *str2, size_t n);
char *_strdup(const char *str);

/* _getenv.c file */
char *_getenv(const char *name);


/* _strtok.c file */
char *_strtok(char *str, const char *delim);

/* _getline.c file */
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);

#endif
