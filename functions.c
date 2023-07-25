#include "main.h"

/**
 * _putchar - display one charactere
 * @c: the charactere to display
 *
 * Return: the character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - function that prints the char from the list
 * @list: list to choose the character
 *
 * Return: number of characters
 */

int print_char(va_list list)
{
	char c = va_arg(list, int);

	return (_putchar (c));
}


/**
 * print_string - function that prints a string
 * @list: list the number of characters in the string
 *
 * Return: number of characters
 */
int print_string(va_list list)
{
	int i = 0;
	int count = 0;
	char *str = va_arg(list, char*);

	if (str == NULL)
		return (-1);

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return (count);
}

/**
 * print_percent - function that handle the case %%
 * @list: list to recognize the case
 * Return: number of characters
 */
int print_percent(va_list __attribute__((unused)) list)
{
	_putchar('%');
	return (1);
}

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

	checker specifier[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
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
