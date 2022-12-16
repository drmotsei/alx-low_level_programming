#include "main.h"
/**
 * _isupper - Checks upper case character
 * @c: Input
 * Return: 1 if c is uppercase r otherwise 0
 */
int _isupper(int c)
{
	char upper = 'A';
	int isupper = 0;

	for (; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			issuper = 1;
			break;
		}
	}
	return (issuper);
}
