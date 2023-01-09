/*
 * File: 0-memset.c
 * Auth: not
 */

#include "main.h"
/**
 * _memset - Entry
 * @s: Pointer to memory
 * @b: Character to fill memory
 * @n: number of bytes to be filled
 * Return: A poniter
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
