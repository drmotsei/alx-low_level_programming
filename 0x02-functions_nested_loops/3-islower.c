#include "main.h"
/**
 * _islower - Entry
 * Return: Returns 1 is lowercase, otherwise 0
 * @c: returns 1 if a lower case otherwise return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
