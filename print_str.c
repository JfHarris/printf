#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 *print_str - prints out a string
 *@str: string
 *Return: chars printed
 *
 */
int print_str(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}

	write(1, '\0', 1);
return (a);
}
