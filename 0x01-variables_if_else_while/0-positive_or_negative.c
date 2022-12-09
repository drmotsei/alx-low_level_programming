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
	int b = - 98;
	int c = 0;

	if (a > 0)
	{
		printf("%d is positive\n", a);
	}
	else if (b < 0)
	{
		printf("%d is negative\n", b);
	}
	else
	{
		printf("%d is zero\n", c);
	}
	return (0);
}
