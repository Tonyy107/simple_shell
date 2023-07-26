#include "main.h"

/**
 * main - entry point
 * Return: 0 or 1
 */
int main(void)
{
	char *rem;
	int lol;
	char *command;
	int stat;
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
			command = rem;
			stat = system(command);
			if (stat != 0)
				printf("'%s' not found\n", command);
		}

	}
	return (0);
}
