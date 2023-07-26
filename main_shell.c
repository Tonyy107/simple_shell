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
	int stat;
	char *command;
	pid_t pid;

	pid = fork();
	while (1)
	{
	printf("$ ");
	getline(&rem, &len, stdin);
		command = rem;
		if (pid == 0)
		{
			execve(command, argv, NULL);
		}
		else
		{
			wait(&stat);
		}
	if (rem != NULL)
	{
		free(rem);
	}
	}
	return (0);
}
