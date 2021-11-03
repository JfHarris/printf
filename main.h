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
 *
 */
typedef struct frmt
{
	char *type;
	int(*f)();
} frm_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(char c);
int print_perc(void);
int print_unint(va_list ap);
int print_dint(va_list ap);
int print_op(const char *format, frm_t *print_arr, va_list list);

#endif
