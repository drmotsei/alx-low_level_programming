#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry
 * @a: intiger
 * @n: intiger
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
