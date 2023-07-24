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
	char *type;
	void (*function)(va_list);
} checker;

/* putchar*/
int _putchar(char c);
{
	return (write(1, &c, 1));
}
/*les void*/
void print_char(va_list list);
void print_string(va_list list);
void print_percent(va_list list);
/*..*/
int _printf(const char *format, ...);
#endif
