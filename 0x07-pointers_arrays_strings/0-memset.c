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
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
	{
		memory[index] = value;
	}
	return (memory);
}
