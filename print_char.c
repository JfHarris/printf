#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 *print_char - prints a char
 *@c: char to be printed
 *Return: nothing else
 *
 */
int print_char(char c)
{
		if (!c)
		{
			return (0);
		}
		_putchar(c);
		return (1);
}
