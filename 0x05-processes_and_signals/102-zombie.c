#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * infinite_while - A program that creates an infinite loop
 * Return: Always 0 Success
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - A program that creates 5 zombie processes.
 * Return: Always 0 Success
 */
int main(void)
{
	pid_t p;
	char c = 0;

	while (c < 5)
	{
		p = fork();
		if (p > 0)
		{
			printf("Zombie process created, PID: %d\n", p);
			sleep(1);
			c++;
		}
		else
			exit(0);
	}

	infinite_while();

	return (EXIT_SUCCESS);
}