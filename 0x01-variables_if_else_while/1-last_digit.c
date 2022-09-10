#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is where the program starts running
 *
 * Return: 0 if error and non zero if no errors 
 */
int main(void)
{
	int n;

	srand(time(0);
	n = rand() - RAND_MAX / 2;
	l = n% 10;

	if (last > 5)
	{
	printf("last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
	printf("last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
