#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>
#include <errno.h>

int _putchar(char c);
void print_prompt();
int parse_input(char *input, char **args);
int check_executable(char* executable);
void execute_command(char **argv, char **envp);
void fork_process(char **args, char **envp);
void run_shell(char **argv __attribute__((unused)), char **envp);

#endif
