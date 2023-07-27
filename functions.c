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
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}

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
 * print_number - function that prints the number neg. or pos. with digit
 * @list: list the value of the number
 *
 * Return: number of character
 */

int print_number(va_list list)
{
	long int number = va_arg(list, int);
	long int absolute_number = 0;
	long int temp_number = 0;
	long int number_digit_position = 1;
	int count = 0;

	if (number < 0) /* Check if number is negative */
	{
		absolute_number = (number * -1); /* transform the negative into positive */
		_putchar('-');
		count++;
	}
	else /* if number is positive */
	{
		absolute_number = number; /* keep the number positive */
	}

	temp_number = absolute_number;

	/* while temp_number has more than one digit*/
	while (temp_number > 9)
	{
		/* Goal is to read number left to right, to decrease by one every while */
		temp_number = temp_number / 10;
		number_digit_position = number_digit_position * 10;
		/* Obtain the number of digit has */
	}
	/* while he has one digit in the number */
	while (number_digit_position >= 1)
	{
		_putchar(((absolute_number / number_digit_position) % 10) + '0');
		/* ex: first loop: (5234 / 1000) % 10 = 5 + '0' -> putchar(5) */
		/* last bloucle: (5234 / 1) % 10 = 4 + '0' -> putchar (4) */
		number_digit_position = number_digit_position / 10;
		count++;
	}

	return (count);
}
