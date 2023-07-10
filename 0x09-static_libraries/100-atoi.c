#include "main.h"

/**
 * _atoi - convert a string into an integer.
 *
 * @j: the string to use.
 *
 * Return: integer.
 */

int _atoi(char *j)
{
	int sign = 1, i = 0;
	unsigned int res = 0;

	while (!(j[i] <= '9' && j[i] >= '0') && j[i] != '\0')
	{
		if (j[i] == '-')
			sign *= -1;
		i++;
	}
	while (j[i] <= '9' && (j[i] >= '0' && j[i] != '\0'))
	{
		res = (res * 10) + (j[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}

