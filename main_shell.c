#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 on success, 1 on error
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", NULL};
	int stat;
	char *buffer;
	size_t bufsize = 32;
	size_t characters;
	char *command;


	pid_t pid;
	pid = fork();
	while (1)
	{
	printf("$ ");
	buffer = (char *)malloc(bufsize * sizeof(char));
	characters = getline(&buffer,&bufsize,stdin);
	if (characters == 1)
	{
		perror("error");
	}
		command = buffer;
		if (pid == 0)
		{
			execve(command, argv, NULL);
		}
		else
		{
			wait(&stat);
		}
	if (buffer != NULL)
	{
		free(buffer);
	}
	}
	return (0);
}
