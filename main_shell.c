#include "main.h"

/**
 * main - entry point
 * Return: 0 or 1
 */

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", NULL};
	char *rem;
	int lol;
	char *command;
	pid_t pid;
	unsigned long len = sizeof(rem);

	while (1)
	{
		printf("$dola$ ");
		lol = getline(&rem, &len, stdin);
		if (lol == -1)
		{
			perror("end of file\n");
			break;
		}
		else
		{
			command = strtok(rem, " ");
			if (command == NULL)
			{
				continue;
			}
			pid = fork();
			if (pid == 0)
			{
				execvp(command, argv);
			}
		}
	}

	return (0);
}
