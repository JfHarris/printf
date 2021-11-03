#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * struct frmt - checks formats
 *@type: format specifier to print
 *@f: print function
 *Return: struct
 */
typedef struct frmt
{
	char *type;
	int (*f)(va_list);
} frm_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_str(va_list ap);
int print_perc(void);
int print_unint(va_list ap);
int print_dint(va_list ap);
int print_op(const char *format, frm_t *print_arr, va_list list);
int _strlen(char *s);

#endif
