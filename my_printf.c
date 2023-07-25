#include "main.h"

/**
 * _printf - produce output according to a format define by %: c, s, %
 * @format: pointeur to a string
 *
 * Return: count
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;

	va_list list;

	va_start(list, format);

	if (format ==  NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			count += print_format(format[i + 1], list);
			i++;
		}
		else
		{
			count++;
			_putchar(format[i]);
		}
	}
	va_end(list);
	return (count);
}
