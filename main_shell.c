#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int stat;
	char *a ;
	size_t n = 10;
	char *buf = malloc(sizeof(char) * n);

	while (1)
	{

	if (pid == -1)
	{
		perror("lol");
		return (1);
	}
	if (pid == 0)
	{
		printf("\n$");
		sleep(1);
		getline(&buf, &n, stdin);
	}
	else
	{
		wait(&stat);
		printf("\n$");
	}
	if ()
	return (0);
}
