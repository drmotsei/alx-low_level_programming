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
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
