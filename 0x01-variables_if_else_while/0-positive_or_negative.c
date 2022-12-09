#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int a = 98;
	int b = -98;
	int c = 0;

	srand(time(0));
	a = rand() - RAND_MAX / 2;
	if (a > 0)
	{
		printf("%d is positive\n", a);
	}
	else if (b < 0)
	{
		printf("%d is negativetive\n", b);
	}
	else
	{
		printf("%d is zero\n", c);
	}
	return (0);
}
