#ifndef SHELL_H
#define SHELL_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>
#include <stdbool.h>

extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);
/* env variable */
int check(char **cmd, char *buf);
void pro_user(void);
void handle_signal(int m);
char **tokenizer(char *line);
char *checks_path(char **path, char *command);
char *implem_path(char *path, char *command);
int builtin_hand(char **command, char *line);
void exit_command(char **command, char *line);

void prints_env(void);

int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int _strncmp(char *s1, char *s2, int n);
char *_strdup(char *s);
char *_strchr(char *s, char c);

void execute(char *cp, char **cmd);
char *fd_path(void);

void free_buffers(char **buf);
/* helpe function free*/
/**
* struct builtin - handles execution of builtin function
* @env: entire  enviromnment
* @exit: finish the command
*
* Description: builtin structure
*/
struct builtin
{
	char *env;
	char *exit;
} builtin;
/**
* struct inf - handles execution of struct flags
* @final_exit: enviroment
* @ln_count: count info
*
* Description: struct flags
*/

struct info
{
	int final_exit;
	int ln_count;
} info;
/**
* struct flags - handles execution of struct flags
* @interactive: inter active
*
* Description: struct flags
*/
struct flags
{
	bool interactive;
} flags;

#endif
