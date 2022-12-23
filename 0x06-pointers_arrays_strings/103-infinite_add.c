#include "main.h"
/**
 * print_buffer - entry
 * @b: input
 * @size: input
 * Return: 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(
