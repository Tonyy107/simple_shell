#include <main.h>

/**
 * main - entry point
 * Return: 0 or 1
 */
int main(void)
{
	char *rem;
	int lol;
	char command;
	int stat;

	while (1)
	{
		printf("$dola$ ");
		lol = getline(&rem, sizeof(rem), stdin);
		if (lol == -1)
		{
			perror("end of file\n")
				break;
		}
		else 
		{
			command = line;
			stat = system(command);
			if (stat != 0)
				printf("'%s' not found",command);
		}

	}
	return (0);
}
