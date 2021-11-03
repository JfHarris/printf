#include "main.h"
#include <stdarg.h>

/**
 *print_op - checks specifier to
 *@format: string
 *@print_arr: struct op array
 *@list: args to print
 *
 *Return: chars
 */

int print_op(const char *format, frm_t *print_arr, va_list list)
{
	char a;
	int count = 0;
	int x = 0;
	int y = 0;

	a = format[x];

	while (a != 0)
	{
		if (a == '%')
		{
			y = 0;
			x++;
			a = format[x];
			while (print_arr[y].type != NULL && a != *(print_arr[y].type))
			{
				y++;
			}
			if (print_arr[y].type != NULL)
				count = count + print_arr[y].f(list);
			else
			{
				if (a == '\0')
				{
					return (-1);
				}
				if (a != '%')
				{
					count += _putchar('%');
				}
				count += _putchar(a);
			}
		}
		else
			count += _putchar(a);
		x++;
		a = format[x];
	}
	return (count);
}

/**
 *_printf - print according to format
 *@format: string
 *
 *Return: chars
 */

int _printf(const char *format, ...)
{
	va_list list;
	int x = 0;

	frm_t ops[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_dint},
		{"i", print_unint},
		{NULL, NULL}
	};

	if (format == NULL)
	{
		return (-1);
	}
	va_start(list, format);
	x = print_op(format, ops, list);
	va_end(list);
	return (x);
}
