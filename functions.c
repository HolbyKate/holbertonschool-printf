#include "main.h"

/**
 * print_char - function that prints the char from the list
 * @list: list to choose the character
 *
 */

void print_char(va_list list)
{
	char c = va_arg(list, int)
		_putchar(c);
}
