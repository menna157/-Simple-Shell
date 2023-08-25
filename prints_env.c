#include "shell.h"

/**
* prints_env - prints the environment string to stdout
*
* Return: 0
*/
void prints_env(void)
{
	int x = 0;
	char **env = environ;
/* while loop for stdout */
	while (env[x])
	{
		write(STDOUT_FILENO, (const void *)env[x], _strlen(env[x]));
		write(STDOUT_FILENO, "\n", 1);
		x++;
	}
}
