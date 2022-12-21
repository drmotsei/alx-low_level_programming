#include "main.h"
/**
 * rev_string - Entry
 * @s: string
 * Return: string in reverse
 */
void rev_string(char *s)
{
	int i;
	char rv = s[0];
	int c = 0;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		rv = s[i];
		s[i] = s[c];
		s[c] = rv;
	}
}
