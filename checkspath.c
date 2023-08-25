#include "shell.h"

/**
* checks_path - checks whether path is valid
* @path: tokenized path
* @command: user entered command
*
* Return: path appended with command on success
* NULL on failure
*/
char *checks_path(char **path, char *command)
{
	int i = 0;
	char *output;

	while (path[i])
	{
		output = implem_path(path[i], command);
		if (access(output, F_OK | X_OK) == 0)
			return (output);
		free(output);
		i++;
	}
	return (NULL);
}
