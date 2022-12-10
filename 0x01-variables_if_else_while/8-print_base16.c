#include <stdio.h>
/**
 * main - Entry
 * Retunr: Always 0
 */
int main(void)
{
	char x;

	int i;

	x = 'a';
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while (x <= 'f')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
