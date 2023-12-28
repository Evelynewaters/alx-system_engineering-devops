#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * infinite_while - creates  a C program that creates 5 zombie processes
 * Return: 0 (sucess0
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
 * main - Main code
 * Return: infinite_while
 */
int main(void)
{
	int i = 0;
	pid_t child_p = 0;

	for (i = 0; i < 5; i++)
	{
		child_p = fork();

		if (child_p > 0)
			printf("Zombie process created, PID: %d\n", child_p);
		else
			exit(0);

	}

	return (infinite_while());
}
