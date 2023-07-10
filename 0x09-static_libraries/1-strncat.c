#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int f;
	int a;

	f = 0;
	while (dest[f] != '\0')
	{
		f++;
	}
	a = 0;
	while (a < n && src[a] != '\0')
	{
	dest[f] = src[a];
	f++;
	a++;
	}
	dest[f] = '\0';
	return (dest);
}

