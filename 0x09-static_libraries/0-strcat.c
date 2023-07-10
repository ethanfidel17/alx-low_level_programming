#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int f;
	int e;

	f = 0;
	while (dest[f] != '\0')
	{
		f++;
	}
	e = 0;
	while (src[e] != '\0')
	{
		dest[f] = src[e];
		f++;
		e++;
	}

	dest[f] = '\0';
	return (dest);
}
