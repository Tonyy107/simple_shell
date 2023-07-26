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

		printf("$");
		lol = getline(&rem, &len, stdin);
		pid = fork();
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
				waitpid(pid, NULL, 0);
		}
	return (0);
}
