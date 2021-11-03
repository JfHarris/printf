#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 *print_char - prints a char
 *@ap: int
 *Return: nothing else
 */
int print_char(va_list ap)
{
		return (_putchar (va_arg(ap, int)));
}
