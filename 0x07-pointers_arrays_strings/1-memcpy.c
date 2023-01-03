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
	unsigned int i;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (i = 0; i < n; i++)
		destination[i] = source[i];
	return (dest);
}
