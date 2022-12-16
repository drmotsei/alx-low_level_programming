#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * Return: 0
 */
void print_numbers(void)
{
	char i;

	i = 0;

	while (i <= 9)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
