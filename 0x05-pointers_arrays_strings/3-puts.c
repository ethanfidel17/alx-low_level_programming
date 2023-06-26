#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @atr: string to print
 */
void _puts(char *atr)
{
	while (*atr != '\0')
	{
		_putchar(*atr++);
	}
		_putchar('\n');
}
