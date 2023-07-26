
<<<<<<< HEAD
=======
/**
 * main - entry point
 *
 * Return: 0 on success, 1 on error
 */
int main(void)
{
	pid_t pid;
	char *a = "exit";
	size_t n = 10;
	char *buf = malloc(sizeof(char) * n);

	pid = fork();
//	while (pid = 0)
//	{

	if (pid == -1)
	{
		perror("lol");
		return (1);
	}
	if (pid == 0)
	{
		sleep(1);
		printf("\n$");
//		getline(&buf, &n, stdin);
	}
//	}
	return (0);
}
>>>>>>> 158682bc604f44b5d16ea1cd64cf02709f15716c
