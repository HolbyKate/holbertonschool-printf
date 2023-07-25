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
	int j = 0;
	int count = 0;

	va_list list;

	checker specificateur[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};

	va_start(list, format);

	if (format ==  NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (- 1);
	}
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			while (specificateur[j].type != '\0')
			{
				if (format[i + 1] == specificateur[j].type)
				{
					specificateur[j].function(list);
					count++;
					j = 0;
					i += 2;
					break;
				}
				j++;
			}
			if (specificateur[j].type == '\0')
			{
				_putchar(format[i]);
				i++;
				count++;
				j = 0;
			}
		}
		else
		{
			_putchar(format[i]);
			i++;
			count++;
		}

	}
	va_end(list);
	return (count);
}
