#include "main.h"
#include <stdarg.h>

/**
 * print_unint - print unsigned int
 *@ap: arg pointer
 *
 * Return: # of chars
 */

int print_unint(va_list ap)
{
	int x = 1;
	int y = 0;
	unsigned int i;

	i = va_arg(ap, unsigned int);

	while (i / x > 9)
	{
		x += 10;
	}
	while (x != 0)
	{
		y = y + _putchar(i / x + '0');
		i = i % x;
		x = x / 10;
	}
	return (y);
}
