/*
 * File: 4-strpbrk.c
 * Auth: not
 */
#include "main.h"
/**
 * _strpbrk - Entry
 * @s: string
 * @accept: bytes
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
