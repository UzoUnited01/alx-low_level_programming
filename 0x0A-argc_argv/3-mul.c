#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int a, b;

	b = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (a = 1; a < argc; a++)
	{
		b = b * atoi(argv[a]);
	}
	printf("%d\n", b);
	return (0);
}
