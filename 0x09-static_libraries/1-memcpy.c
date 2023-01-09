/*
 * File: 1-memcpy.c
 * Auth: not
 */
#include "main.h"
/**
 * _memcpy - Entry
 * @dest: Pointer
 * @src: source
 * @n: number of bytes
 * Return: Pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
