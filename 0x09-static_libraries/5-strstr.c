/*
 * File: 5-strstr.c
 * Auth: not
 */
#include "main.h"
/**
 * _strstr - Entry
 * @haystack: search location
 * @needle: string to search
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
