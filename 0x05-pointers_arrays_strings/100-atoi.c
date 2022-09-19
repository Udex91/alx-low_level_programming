#include "main.h"

/**
 * _atoi - Entry point
 * @s: input
 *
 * Return: The integer value of the converted string.
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '_')
			sign *= -l;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
