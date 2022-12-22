#include "main.h"
#include <unistd.h>
/**
 * _strcat - Entry
 * @dest: pointer to the string
 * @src: source string to be appended to @dest
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, destlen = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}

	return (dest);
}
