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

<<<<<<< HEAD
int _putchar(char c);
=======
/* puts.c */
int _putchar(char c);
void _puts(const char *str);

>>>>>>> f71062b04eccb0757dbd34e2e68dad6400f5399c
void print_prompt(void);
int parse_input(char *input, char **args);

/* exec.c file */
int check_executable(char *executable);
void execute_command(char **argv, char **envp);
<<<<<<< HEAD
char *findCommandDirectory(const char *command);
=======
char *find_command_directory(const char *command);

>>>>>>> f71062b04eccb0757dbd34e2e68dad6400f5399c
/* fork.c file */
void fork_process(char **args, char **envp);

/* run_shell.c file */
<<<<<<< HEAD
void run_shell(char **argv _attribute_((unused)), char **envp);
=======
void run_shell(char **argv __attribute__((unused)), char **envp);
void handle_input(char *input, char **args, char **envp);
ssize_t read_input(char **input, size_t *input_len);
>>>>>>> f71062b04eccb0757dbd34e2e68dad6400f5399c

/* stings.c file */
void _strcpy(char *dest, const char *src);
char *_strcat(char *dest, const char *src);
size_t _strlen(const char *str);
int _strncmp(const char *str1, const char *str2, size_t n);
char *_strdup(const char *str);

/* _getenv.c file */
char *_getenv(const char *name);
<<<<<<< HEAD
=======


>>>>>>> f71062b04eccb0757dbd34e2e68dad6400f5399c

#endif
