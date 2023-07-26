#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 on success, 1 on error
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", NULL};
	char *rem = NULL;
	size_t len = sizeof(rem);
	int lol, stat;
	char *command;
	pid_t pid;

	pid = fork();
	printf("$ ");
	lol = getline(&rem, &len, stdin);

	if (lol == -1)
	{
		perror("end of file\n");
	}
	else
	{
		command = rem;
		if (pid == 0)
		{
			execve(command, argv, NULL);
		}
		else
		{
			wait(&stat);
		}
	}
	if (rem != NULL)
	{
		free(rem);
	}
	return 0;
}
