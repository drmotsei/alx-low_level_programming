#include "main.h"
/**
 * print_most_numbers - write numbers to 9 excludin 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	char i;

	for (i >= 0; i != 2 && i != 4; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}