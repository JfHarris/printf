#include "main.h"

/**
 * print_dint - print ints
 *@ap: arg pointer
 *
 * Return: ints
 */

int print_dint(va_list ap)
{
	int dig = 1, int div = 1;
	int x = va_arg(ap, int);
	int y = 0, int z = 0, int negs = 0, int num = n;

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	while (num / 10 != 0)
	{
		dig++;
		num /= 10;
	}
	for (y = (dig - 1) ; y >= 0 ; y--)
	{
		div = 1;
		for (z = 0 ; z < y ; z++)
		{
			div = div * 10;
		}
		if (x < 0)
		{
			_putchar('-');
			_putchar((0 - (x / div)) + '0');
			x = x % div;
			x = 0 - x;
			negs = 1;
		}
		else
		{
			_putchar((x / div) + '0');
			x = x % div;
		}
	}
	return (dig - 1 + negs);
}
