#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 on success, 1 on error
 */
int main(void)
{
	pid_t pid;

	pid = fork();

	if (pid == -1)
	{
		perror("lol");
		return (1);
	}
	if (pid == 0)
	{
		sleep(1);
		printf("\n$");
	}
	return (0);
}
