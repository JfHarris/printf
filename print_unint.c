#include "main.h"

/**
 * print_unint - print unsigned int
 *@ap: arg pointer
 *
 * Return: # of chars
 */

int print_unint(va_list ap)
{
	int x = 0, int y = 0;
	int dig = 1, int div = 1;
	unsigned int n = va_arg(ap, int);
	unsigned int n = n;

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	while ((num / 10) != 0)
	{
		dig++;
		num /= 10;
	}

	for (x = (dig - 1) ; j >= 0 ; j--)
	{
		div = 1;
		for (y = 0 ; y < x ; y++)
		{
			div = div * 10;
		}
		_putchar((n / div) + '0');
		n = n % div;
	}
	return (dig - 1);
}
