#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 on success, 1 on error
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", NULL};
	int output;
	char *buffer;
	size_t bufsize = 32;
	char *command;
	pid_t pid;

	pid = fork();

	while (1)
	{
		buffer = (char *)malloc(bufsize * sizeof(char));
		getline(&buffer, &bufsize, stdin);

		if (buffer == argv[0])
		{
			perror("./hsh");
		}
		else
		{
			command = buffer;
			output = system(command);
			if (output != 0)
				printf("command '%s' fatel .\n", command);
			if (pid == 0)
			{
				printf("$ \n");
				command = buffer;
				output = system(command);
				if (output != 0)
					printf("command '%s' fatel .\n", command);
				wait(&output);
			}
		}
		if (buffer != NULL)
		{
			free(buffer);
		}
	}
	return (0);
}
