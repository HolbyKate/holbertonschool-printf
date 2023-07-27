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
	/* check some condition format null and format only have % */
	if (format ==  NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	/* Loop to iterating through the string */
	for (i = 0; format[i] != '\0'; i++)
	{
		/* check if format == % */
		if (format[i] == '%')
		{
			/* if found % check format[i] + 1 and attribute */
			/* the format specifier if is found; else print % */
			/* and the type */
			count += print_format(format[i + 1], list);
			i++;
		}
		else
		{
			/* print putchar[i] if % not find and count the char printed */
			count++;
			_putchar(format[i]);
		}
	}
	va_end(list);
	return (count);
}
