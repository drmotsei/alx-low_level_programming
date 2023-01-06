#include "main.h"
/**
 * factorial - Entry
 * @n: Number
 * Return: if n>0 - the factorial of n, else -1 to indicate error
 */
int factorial(int n)
{
	int results = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
