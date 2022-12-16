#include "main.h"
/**
 * print_numbers - prints numbers
 * Return: void
 */
void print_numbers(void)
{
	int start = 0, end = 9;

	while (start <= end)
	{
		_putchar(start + '0');
		start++;
	}
	_putchar('\n');
}
