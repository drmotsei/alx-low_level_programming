/*
 * File: 2-strchr.c
 * Auth: not
 */
#include "main.h"
/**
 * _strchr - Entry
 * @s: String
 * @c: Character
 * Return: if c is found - a pointer to the first occurance, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
