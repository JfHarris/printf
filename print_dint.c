#include "main.h"
#include <stdarg.h>

/**
 * print_dint - print ints
 *@ap: arg pointer
 *
 * Return: ints
 */

int print_dint(va_list ap)
{
	int x;
	int y;
	int z;
	unsigned int i;

	x = 1;
	y = 1;
	z = 0;

	x = va_arg(ap, int);

	if (x < 0)
	{
		z = z + _putchar('-');
		i = x * -1;
	}
	else
	{
		i = x;
	}
	while (i / y > 9)
	{
		y *= 10;
	}
	while (y != 0)
	{
		z = z + _putchar(i / y + '0');
		i = i % y;
		y = y / 10;
	}
	return (z);
}
