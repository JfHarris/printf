#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 *print_str - prints out a string
 *@ap: string
 *Return: chars printed
 *
 */
int print_str(va_list ap)
{
	int i;
	char *b;

	b = va_arg(ap, char *);
	if (b == NULL)
	{
		b = "(NULL)";
	}
	i = 0;
	while (b[i] != '\0')
	{
		i = i + _putchar(b[i]);
	}

return (i);
}
