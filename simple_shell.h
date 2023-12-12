#ifndef _simple_shell_h_
#define _simple_shell_h_
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
char *new_command(void);
int str_length(char *str);
char *copy_string(char *str);
char **split_command(char *command);
#endif