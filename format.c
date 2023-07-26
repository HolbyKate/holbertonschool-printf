#include "main.h"

/**
 * print_format - Function to search the specificataeur
 * @type: The type is the char to be check on the struct specifier
 * @list: char from list
 *
 * Return: count of charactere printed
 */
int print_format(const char type, va_list list)
{
	int j = 0;
	int count = 0;
	/*structure pour vérifier les caractères spéciaux*/
	checker specifier[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_number},
		{'i', print_number},
		{'\0', NULL}
	};

	while (specifier[j].type != '\0')
	{
		if (type == specifier[j].type)
		{
			count++;
			return (specifier[j].function(list));
		}
		j++;
	}
	_putchar('%');
	_putchar(type);
	count += 2;
	return (count);
}
