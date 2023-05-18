#include "shell.h"
/**
 * shell_status - exit
 * @command: parsed
 * @inp: input
 * @x: int 4 count
 * @name: fi le name
 * Return: void
 */
void shell_status(char **command, char *inp, char **name, int x)
{
	int y = 0, z;

	if (command[1] == NULL)
	{
		free(inp);
		free(command);
		exit(EXIT_SUCCESS);
	}

	while (command[1][y])
	{
		if (_alpha(command[1][i++]) != 0)
		{
			_errorc(name, x, command);
			break;
		}
		else
		{
			z = _pretoia(command[1]);
			free(inp);
			free(command);
			exit(z);
		}
	}
}
