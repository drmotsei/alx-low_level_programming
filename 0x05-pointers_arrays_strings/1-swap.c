#include "main.h"
/**
 * swap_int - Entry
 * @a: intiger
 * @b: intiger
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
