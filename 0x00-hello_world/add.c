#include <stdio.h>
#include <unistd.h>

int main (void)
{
	pid_t pid;
	pid_t ppid;
	pid = getpid();

	printf("Before fork I was one with id no %u\n", pid);

	pid = fork();

	if (pid == -1)
	{
		perror("Unsuccessful\n");
		return 1;
	}

	if (pid == 0)
	{
		sleep (7);
		printf("I am the child with no %u\n", pid);
	}
	else
		ppid = getppid();
		printf("I am the parent with id no: %u\n", ppid);

	return 0;
}
