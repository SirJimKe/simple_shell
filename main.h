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
void execute_command(char **args, char *envp[]);
void fork_process(void);
void run_shell(void);

#endif
