#include "shell.h"

/**
* builtin_hand - handles execution of builtin functions
* @command: tokenized commands
* @line: input read from stdin
*
* Return: 1 if executed, 0 if not
*/
int builtin_hand(char **command, char *line)
{
	struct builtin builtin = {"env", "exit"};

	if (_strcmp(*command, builtin.env) == 0)
	{
		prints_env();
		return (1);
	}
	else if (_strcmp(*command, builtin.exit) == 0)
	{
		exit_command(command, line);
		return (1);
	}
	return (0);
}
/**
 *handle_signal- it keeps track is interactive mode
 *@m: the signal number
 *Return: nothing
 */

void handle_signal(int m)
{
	(void)m;
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "$ ", 2);
}
