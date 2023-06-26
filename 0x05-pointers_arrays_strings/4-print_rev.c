#include "main.h"
/**
 * print_rev - imprime en reversa
 * @r: string
 * return: 0
 */
void print_rev(char *r)
{
	int longi = 0;
	int o;

	while (*r != '\0')
	{
		longi++;
		r++;
	}
	r--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*r);
		r--;
	}

	_putchar('\n');
}
