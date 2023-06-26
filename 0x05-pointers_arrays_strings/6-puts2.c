#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @abc: input
 * Return: print
 */
void puts2(char *abc)
{
	int longi = 0;
	int b = 0;
	char *g = abc;
	int o;

	while (*g != '\0')
	{
		g++;
		longi++;
	}
	b = longi - 1;
	for (o = 0 ; o <= b ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(abc[o]);
	}
	}
	_putchar('\n');
}
