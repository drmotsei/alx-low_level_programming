#include "main.h"
/**
 *_isalpha - Entry
 *Return: Returns 1 c is a letter, otherwise 0
 *@c: returns 1 if either an upper or lower case otherwise returns 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
