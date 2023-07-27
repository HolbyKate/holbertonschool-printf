#include "main.h"

/**
 * print_format - Function to search the specificateur
 * @type: The type is the char to be check on the struct specifier
 * @list: char from list
 *
 * Return: count of charactere printed
 */
int print_format(const char type, va_list list)
{
	int j = 0;
	int count = 0;
	/*structure to check the specifier after %*/

	checker specifier[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_number},
		{'i', print_number},
		{'\0', NULL}
	};
	/* Loop to iterating the structure to know if type is not '\0' */
	while (specifier[j].type != '\0')
	{
		/* Condition check if type correspond to a specifer */
		if (type == specifier[j].type)
		{
			count++;
			/* Link the right fct if j has a correspondance */
			return (specifier[j].function(list));
		}
		/* if j has no correspondance go forward in the structure */
		j++;
	}
	/* if type is not in the structure print %, the type after % */
	_putchar('%');
	_putchar(type);
	count += 2;
	return (count);
}
