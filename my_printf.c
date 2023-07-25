#include "main.h"

/**
 * _printf - profuce output according to a format define by %: c, s, %
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
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{'\0', NULL}
	};

	va_start(list, format);

	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			while (specificateur[j].type != NULL)
			{

				if (format[i] == *specificateur[j].type)
				{
					specificateur[j].function(list);
					count++;
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(list);
	return (count);
}
