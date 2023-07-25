#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

/**
 * struct checker - format handler
 * @type: type
 * @function: function
 *
 * Description: check every specific format and add the fucntion to them
 */

typedef struct checker
{
	char type;
	int (*function)(va_list);
} checker;

/* functions use on struct define in my_printf*/
int _putchar(char c);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
int print_format(char type, va_list list);
/* main function of printf*/
int _printf(const char *format, ...);
#endif
