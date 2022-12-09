#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int a;

	srand(time(0));
	a = rand() - RAND_MAX / 2;
	if (a > 0)
	{
		printf("%d is positive\n", a);
	}
	else if (a < 0)
	{
		printf("%d is negativetive\n", a);
	}
	else
	{
		printf("%d is zero\n", a);
	}
	return (0);
}
